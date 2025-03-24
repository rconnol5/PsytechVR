import openai
import json
import os
from dotenv import load_dotenv

load_dotenv()
openai.api_key = os.getenv("OPENAI_API_KEY")

# Load the templates from gpt_prompts.json
with open("gpt_prompts.json", "r") as f:
    gpt_prompts = json.load(f)

# Load the fear prompts from fear_prompts.json
with open("fear_prompts.json", "r") as f:
    fear_prompts_data = json.load(f)

def refine_prompt_for_360(user_prompt: str, prompt_type: str = "base") -> str:
    # Get the template text from the JSON based on prompt_type
    template_text = gpt_prompts.get(prompt_type, gpt_prompts["base"])

    # Insert the user prompt into the template
    filled_prompt = template_text.replace("{{USER_PROMPT}}", user_prompt)

    # Create the system message with the filled-in prompt
    system_message = {
        "role": "system",
        "content": filled_prompt
    }

    # Call the ChatCompletion endpoint
    response = openai.chat.completions.create(
        model="gpt-4o-mini",
        messages=[system_message],
        temperature=0.7,
        max_tokens=200
    )

    # Access the response via attributes, not by indexing the object
    refined_prompt = response.choices[0].message.content.strip()
    return refined_prompt


def save_refined_prompts():
    # Prepare the prompts by type (base, content, composition)
    refined_prompts = {"base": [], "content": [], "composition": []}

    # Iterate through each fear prompt
    for fear_prompt in fear_prompts_data["fears"]:
        user_prompt = fear_prompt["prompt"]

        # Refine and add the prompt for each type
        for prompt_type in ["base", "content", "composition"]:
            refined_prompt = refine_prompt_for_360(user_prompt, prompt_type)
            print(f"Refined prompt for '{fear_prompt['name']}' ({prompt_type}): {refined_prompt}")
            refined_prompts[prompt_type].append({"name": fear_prompt["name"], "refined_prompt": refined_prompt})

    # Save each type of refined prompts to a separate JSON file
    for prompt_type, prompts in refined_prompts.items():
        print(f"Saving {prompt_type} prompts...")
        print("Prompts:", prompts)
        with open(f"{prompt_type}_prompts.json", "w") as f:
            json.dump(prompts, f, indent=4)

def main():
    # Generate and save the refined prompts for all types
    save_refined_prompts()

if __name__ == "__main__":
    main()
