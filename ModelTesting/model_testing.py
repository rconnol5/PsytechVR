import requests
import json
import io
from PIL import Image
import os
from dotenv import load_dotenv
import sys

# Load Hugging Face API token from environment variable or replace with your token directly
load_dotenv() # Load environment variables from .env file
API_TOKEN = os.getenv("HUGGINGFACE_API_TOKEN")  # or directly set as "YOUR_API_TOKEN"
API_URL_TEMPLATE = "https://api-inference.huggingface.co/models/{}"

# Define the path to the JSON file with fear prompts
PROMPTS_FILE = "fear_prompts.json"

# Set the model name you want to test
model_name = "igorriti/flux-360"  # Replace with the model you want to test

# Setup headers for the API call
headers = {"Authorization": f"Bearer {API_TOKEN}"}


# Load prompts from JSON file
def load_prompts(file_path):
    with open(file_path, "r") as file:
        data = json.load(file)
    return data["fears"]


# Query the model with a given prompt
def query_model(model_name, prompt):
    url = API_URL_TEMPLATE.format(model_name)
    response = requests.post(url, headers=headers, json={"inputs": prompt})
    if response.status_code == 200:
        return response.content
    else:
        print(f"Error {response.status_code} for prompt '{prompt}': {response.text}")
        return None


# Generate images based on the prompts and save them
def generate_images(model_name, prompts):
    # Create directory to save generated images
    output_dir = f"generated_images/{model_name.replace('/', '_')}"
    os.makedirs(output_dir, exist_ok=True)

    for fear in prompts:
        print(f"Generating image for '{fear['name']}'...")
        image_bytes = query_model(model_name, fear["prompt"])
        if image_bytes:
            try:
                image = Image.open(io.BytesIO(image_bytes))
                # Save image with a standardized name
                image_filename = os.path.join(output_dir, f"{fear['name'].replace(' ', '_')}.png")
                image.save(image_filename, "PNG")
                print(f"Saved image for '{fear['name']}' as '{image_filename}'")
            except Exception as e:
                print(f"Failed to save image for '{fear['name']}': {e}")
        else:
            print(f"No image generated for '{fear['name']}'.")


# Main function to execute the testing script
def main():
    # Check if input file is provided as command-line argument
    if len(sys.argv) == 2:
        model_name = sys.argv[1]
    elif len(sys.argv) > 2:
        print("Usage: python try_model.py <model_name>")
        sys.exit(1)

# Load prompts
    prompts = load_prompts(PROMPTS_FILE)
    # Generate images
    generate_images(model_name, prompts)


if __name__ == "__main__":
    main()
