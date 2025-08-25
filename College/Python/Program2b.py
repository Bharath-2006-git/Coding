import pandas as pd
from PIL import Image
import matplotlib.pyplot as plt

# csv_file = r'C:/Users/bhara/OneDrive/Desktop/iris/iris.csv'
# df_csv = pd.read_csv(csv_file)
# print("CSV Data:")
# print(df_csv.head())

# excel_file = r'C:/Users/bhara/OneDrive/Desktop/iris/iris (2).xlsx'  
# df_excel = pd.read_excel(excel_file)
# print("\nExcel Data:")
# print(df_excel.head())

# text_file = r'C:/Users/bhara/OneDrive/Desktop/iris/iris.txt'
# df_text = pd.read_csv(text_file, sep='\t')  
# print("\nText Data:")
# print(df_text.head())

# image_path = r'C:/Users/bhara/OneDrive/Desktop/iris/sample_image.png'
# try:
#     img_pil = Image.open(image_path)
#     print("\nImage opened successfully.")
#     plt.imshow(img_pil)
#     plt.title("Iris Image")
#     plt.axis('off')
#     plt.show()
# except FileNotFoundError:
#     print("\nImage file not found")
# except Exception as e:
#     print(f"\nError using PIL: {e}")

import scipy.io.wavfile as wave_file

audio_file = r'C:/Users/bhara/OneDrive/Desktop/iris/sample_audio.wav'

try:
    sample_rate, data = wave_file.read(audio_file)
    print("\nAudio file opened successfully.")
    print(f"Sample rate: {sample_rate} Hz")
    print(f"Number of samples: {len(data)}")
    duration = len(data) / sample_rate
    print(f"Duration: {duration} seconds")
except Exception as e:
    print(f"\nError opening audio file: {e}")
