import openai
import json
from dotenv import load_dotenv

load_dotenv()
openai.api_key = os.getenv("OPENAI_API_KEY")

# Load the prompts from the JSON file
with open("prompts.json", "r") as f:
    prompt_data = json.load(f)


def refine_prompt_for_360(user_prompt: str, prompt_type: str = "base") -> str:
    # get the template text from the JSON based on prompt_type
    template_text = prompt_data.get(prompt_type, prompt_data["base"])

    # insert the user prompt into the template
    filled_prompt = template_text.replace("{{USER_PROMPT}}", user_prompt)

    # create the system message with the filled-in prompt
    system_message = {
        "role": "system",
        "content": filled_prompt
    }

    # call the ChatCompletion endpoint
    response = openai.ChatCompletion.create(
        model="gpt-3.5-turbo",
        messages=[system_message],
        temperature=0.7,
        max_tokens=200
    )

    # 5. Extract the refined prompt from the response
    refined_prompt = response["choices"][0]["message"]["content"].strip()
    return refined_prompt


def main():
    user_input = "360-degree view from the edge of a towering cliff, looking down at a vast drop with jagged rocks below, clouds partially obscuring the ground, and a thin, swaying suspension bridge connecting distant peaks."

    # choose which prompt style we want to use (base, content, or composition)
    prompt_style = "content"  # change to "base" or "composition" as desired

    # generate refined prompt
    improved_prompt = refine_prompt_for_360(user_input, prompt_type=prompt_style)
    print("Refined Prompt:\n", improved_prompt)


if __name__ == "__main__":
    main()
