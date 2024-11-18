from optimum.onnxruntime import ORTModelForSequenceClassification
from transformers import AutoTokenizer
from diffusers import FluxPipeline
import torch
import os

print("Torch CUDA available:", torch.cuda.is_available())
print("Torch version:", torch.__version__)

torch.cuda.empty_cache()

save_directory = "onnx/"

pipeline = FluxPipeline.from_pretrained(
    'black-forest-labs/FLUX.1-dev',
    torch_dtype=torch.float16
).to('cpu')

pipeline.load_lora_weights('igorriti/flux-360', weight_name='lora.safetensors')

def export_component(component, dummy_input, export_path, input_names, output_names, dynamic_axes):
    """
    Exports a pipeline component to ONNX.
    """
    print(f"Exporting {export_path}...")
    torch.onnx.export(
        component,
        dummy_input,
        export_path,
        export_params=True,
        opsect_version=14,
        input_names=input_names,
        output_names=output_names,
        dynamic_axes=dynamic_axes,
    )
    print(f"Exported {export_path} successfully!")


# Export `text_encoder`
print("Exporting text_encoder...")
pipeline.text_encoder.to("cuda")
dummy_text_input = torch.randint(0, 49408, (1, 77)).to("cuda")  # Adjust dimensions if needed
export_component(
    pipeline.text_encoder,
    dummy_text_input,
    os.path.join(onnx_dir, "flux_text_encoder.onnx"),
    input_names=["input_ids"],
    output_names=["output_embeddings"],
    dynamic_axes={"input_ids": {0: "batch_size"}, "output_embeddings": {0: "batch_size"}},
)
pipeline.text_encoder.to("cpu")

# Export `text_encoder_2`
print("Exporting text_encoder_2...")
pipeline.text_encoder_2.to("cuda")
dummy_text_input_2 = torch.randint(0, 32128, (1, 77)).to("cuda")  # Adjust dimensions if needed
export_component(
    pipeline.text_encoder_2,
    dummy_text_input_2,
    os.path.join(onnx_dir, "flux_text_encoder_2.onnx"),
    input_names=["input_ids"],
    output_names=["output_embeddings"],
    dynamic_axes={"input_ids": {0: "batch_size"}, "output_embeddings": {0: "batch_size"}},
)
pipeline.text_encoder_2.to("cpu")

# Export `transformer`
print("Exporting transformer...")
pipeline.transformer.to("cuda")
dummy_latent_input = torch.randn(1, 3, 256, 256).to("cuda")  # Adjust dimensions if needed
export_component(
    pipeline.transformer,
    dummy_latent_input,
    os.path.join(onnx_dir, "flux_transformer.onnx"),
    input_names=["latent_input"],
    output_names=["latent_output"],
    dynamic_axes={"latent_input": {0: "batch_size"}, "latent_output": {0: "batch_size"}},
)
pipeline.transformer.to("cpu")

# Export `vae`
print("Exporting VAE...")
pipeline.vae.to("cuda")
dummy_vae_input = torch.randn(1, 4, 64, 64).to("cuda")  # Adjust dimensions for your latent space
export_component(
    pipeline.vae.decode,
    dummy_vae_input,
    os.path.join(onnx_dir, "flux_vae.onnx"),
    input_names=["latent_input"],
    output_names=["generated_image"],
    dynamic_axes={"latent_input": {0: "batch_size"}, "generated_image": {0: "batch_size"}},
)
pipeline.vae.to("cpu")

print("All components exported successfully!")