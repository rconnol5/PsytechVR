import requests
import io
from PIL import Image
from dotenv import load_dotenv

# import torch
# import torchvision
# print(torch.__version__)
# print(torchvision.__version__)

#from realesrgan import RealESRGAN

load_dotenv() # Load environment variables from .env file
API_TOKEN = os.getenv("HUGGINGFACE_API_TOKEN")

# Define API and headers for Hugging Face
#API_URL = "https://api-inference.huggingface.co/models/artificialguybr/360Redmond"
#API_URL = "https://api-inference.huggingface.co/models/igorriti/flux-360"
API_URL = "https://api-inference.huggingface.co/models/ProGamerGov/360-Diffusion-LoRA-sd-v1-5"
headers = {"Authorization": f"Bearer {HUGGINGFACE_API_TOKEN}"}

# Function to query the model
def query(payload):
    response = requests.post(API_URL, headers=headers, json=payload)
    return response.content

# Request the panorama image
image_bytes = query({
    "inputs": "360-degree view from the edge of a towering cliff, looking down at a vast drop with jagged rocks below, "
              "clouds partially obscuring the ground, and a thin, swaying suspension bridge connecting distant peaks.",
})

# Open the image
try:
    # Load the image as a PIL image
    image = Image.open(io.BytesIO(image_bytes))

    # Resize image to 1600x800 if needed
    #image = image.resize((1600, 800))
    # print the size of the image
    print(image.size)
    image.show()  # Display the image
    #image.save("test_image3.png", "PNG")  # Save the image

    # Upscale the image using Real-ESRGAN
    # with RealESRGAN('cuda') as upscaler:  # Use 'cuda' for GPU, 'cpu' for CPU
    #     upscaled_image = upscaler(image, scale=3)  # Upscale by a factor of 3

    # Display and save the upscaled image
    #upscaled_image.show()
    #upscaled_image.save("upscaled_output_image.png", "PNG")
    #print("Image saved as upscaled_output_image.png")
except Exception as e:
    print("An error occurred while displaying/saving the image:", e)
