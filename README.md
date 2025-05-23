# PsytechVR

Our project aims to develop an advanced Virtual Reality (VR) therapy system enhanced by generative AI, designed to revolutionize mental health treatment across various sectors including private clinics, healthcare organizations, home therapy providers, educational institutions, corporate HR departments, and potentially correctional facilities. Key features include a personalized treatment scenarios generated by AI, real-time session monitoring via a specialist control launchpad, and detailed analytics through a robust dashboard. This technology facilitates real-time patient monitoring, enhances therapeutic outcomes, and supports remote treatment continuity. Future developments include enhancing immersive experiences with walkable environments, addressing contemporary mental health needs exacerbated by global crises like those in Ukraine and Gaza

# Instructions

1. Download Unity Hub version 2022.3.46f1. The link can be found here: https://unity.com/releases/editor/archive
2. download this repository, and set it as a project.
3. Open the Project. The various Scenes and their Capabilities are listed below.


# Pipeline Usage
To access the main text-to-image pipeline, you will need to open the "Text-to-Image Pipeline" Unity project. 
Within this project is a scene called "Start Scene" located in "Assets/HuggingFaceAPI/Examples/Scenes". Open this scene.
In the scene hierarchy, select the "Prompt and Image Generation" gameobject, and view in the inspector. There will be a serializedfield entry box labeled "Open AI API Key". You can enter your API key here. This will be used to access GPT-4o mini.
You will also need to enter your API key for HuggingFace, to access the text-to-image model. To do this, navigate to Window -> Hugging Face API Wizard. In the window there is an entry box labeled "API Key".
Currently, the image model we have configured is the "FLUX.1-dev" model, which generates normal flat 2D images. This model is linked in the Hugging Face API Wizard, in the entry box labeled "TextToImage". The current link is: https://api-inference.huggingface.co/models/black-forest-labs/FLUX.1-dev
Previously, we were using the model "FLUX-360", which generates 360-degree images. However, Hugging Face has disabled inference endpoints, so this model cannot currently be accessed. If this is reverted in the future, simply changing the end of the link (after ...models/) to the correct endpoint will change the model used in our pipeline.

Once you have entered your API keys, you will be able to use the pipeline. Load "Start Scene", then enter play mode. You will be able to enter a text prompt. Once entered, click the "Refine Prompt" button, which will call GPT-4o mini to generate an improved prompt. Then you will have the option to append "suggestions" to the end of the prompt. Next, click "Generate Image", which will call FLUX-1.dev and take approximately 1-2 minutes to generate the image. Once it is generated, a button to "View Image in VR" will be made available. Clicking this button loads a new scene, "Image Environment", which enables viewing of the image in 360-degrees. (Note that this is optimized to work with a 360-degree image model, so the images generated by FLUX-1.dev will be warped in this viewing mode.) To return to the prompting menu, press "R" on your keyboard while in viewing mode.


# DepthMap Testing

Incomplete, but essentially allows for testing turning a 360 degree image into a depth map, then a dome with depth demonstrated. Within the Main Camera, there are several scripts that serve as various parts of the pipeline. With all of them enabled, it may take over a minute for the scripts to load and run.

Location: Assets -> Scenes

1. Depth Map Testing: largely obsolete. Intended for 2D images, should remain disabled for most purposes.
2. Depth Map 360: Insert a Depth Map in the "Depth Map" variable. Insert the 360 image on environment image, or the depth map if you want further illustration of the depth results. Set the ShaderMat to "ClarityMat" for the clearest results. Depth Scale determines the size of the "Dome".
3. Depth Material Creator: Experimental program to create a Unity Material from a shader and input image. Largely obsolete.
4. Depth Material Loader: connects to the python Depth Map Program. Processes an image on the input image path, and outputs it on the output image path. Both are default set to be images within Assets -> Materials.
