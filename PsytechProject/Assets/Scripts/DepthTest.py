import argparse
import requests
from PIL import Image
import torch
import numpy as np
from transformers import DepthProImageProcessorFast, DepthProForDepthEstimation

def process_image(image_path, output_path):
    device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
    
    # Load image
    image = Image.open(image_path).convert("RGB")
    
    # Load model and processor
    image_processor = DepthProImageProcessorFast.from_pretrained("apple/DepthPro-hf")
    model = DepthProForDepthEstimation.from_pretrained("apple/DepthPro-hf").to(device)
    
    # Preprocess and forward pass
    inputs = image_processor(images=image, return_tensors="pt").to(device)
    with torch.no_grad():
        outputs = model(**inputs)
    
    # Post-process depth estimation
    post_processed_output = image_processor.post_process_depth_estimation(
        outputs, target_sizes=[(image.height, image.width)],
    )
    depth = post_processed_output[0]["predicted_depth"]
    depth = (depth - depth.min()) / (depth.max() - depth.min())
    depth = depth * 255.
    depth = depth.detach().cpu().numpy()
    depth_image = Image.fromarray(depth.astype("uint8"))
    
    # Save depth map
    depth_image.save(output_path)
    print(f"Depth map saved to {output_path}") #for tracking during testing.

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Generate a depth map from an image.")
    parser.add_argument("input_image", type=str, help="Path to the input image.")
    parser.add_argument("output_image", type=str, help="Path to save the depth map.")
    
    args = parser.parse_args()
    process_image(args.input_image, args.output_image)
