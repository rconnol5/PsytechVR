from transformers import AutoModelForSequenceClassification, AutoTokenizer
import torch

# Load the model and tokenizer
model_name = 'igorriti/flux-360'
tokenizer = AutoTokenizer.from_pretrained(model_name)
model = AutoModelForSequenceClassification.from_pretrained(model_name)

# Example input
input_text = 'Create a 360 image of a room in a mansion full of spiders'
inputs = tokenizer(input_text, return_tensors='pt')

# Run the model
outputs = model(**inputs)
print(outputs.logits)