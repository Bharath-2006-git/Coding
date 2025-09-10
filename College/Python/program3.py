import pandas as pd
data = {
    'outlook': ['sunny', 'sunny', 'overcast', 'rainy', 'rainy', 'rainy',
                'overcast', 'sunny', 'sunny', 'rainy', 'sunny', 'overcast', 'overcast', 'rainy'],
    'temperature': ['hot', 'hot', 'hot', 'mild', 'cool', 'cool',
                    'cool', 'mild', 'cool', 'mild', 'mild', 'mild', 'hot', 'mild'],
    'humidity': ['high', 'high', 'high', 'high', 'normal', 'normal',
                 'normal', 'high', 'normal', 'normal', 'normal', 'high', 'normal', 'high'],
    'windy': [False, True, False, False, False, True,
              True, False, False, False, True, True, False, True],
    'play': ['no', 'no', 'yes', 'yes', 'yes', 'no',
             'yes', 'no', 'yes', 'yes', 'yes', 'yes', 'yes', 'no']
}
# a) Load the dataset into a DataFrame
df=pd.DataFrame(data)

#b) Display the first and last few rows
print("\n=== Head (First 5 rows) ===")
print(df.head())

print("\n=== Tail (Last 5 rows) ===")
print(df.tail())

#c) Check the dimensions of the dataset
print("\n=== Dimensions===")
print(f"Rows: {df.shape[0]},Column: {df.shape[1]}")

#d) View column names
print("\n=== Column Names ===")
print(df.columns.tolist())

#e) Get information about the dataset
print("\n=== Dataset Info ===")
print(df.info())

#f)Check for missing values
print("\n=== Missing Values ===")
print(df.isnull().sum())

#g) Basic statistical information
print("\n=== Statistical Summary ===")
print(df.describe(include='all'))