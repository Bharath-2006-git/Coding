import numpy as np
import pandas as pd
from sklearn.impute import SimpleImputer

# Sample data with None values
data = {
    'Name': ['Alice', 'Bob', 'Charlie', 'David', None],
    'Age': [25, None, 30, 22, 28],
    'Salary': [50000, 60000, None, 52000, 58000],
    'Department': ['HR', 'IT', 'IT', None, 'Finance']
}

# Step 0: Create DataFrame
df = pd.DataFrame(data)

# a) Replace None with np.nan
df = df.replace({None: np.nan})
print("\nDataFrame with NaN values:\n", df)

# b) Identify missing values
print("\nNumber of missing values per column:\n")
print(df.isnull().sum())
print("\nOriginal Dataset with missing values:\n")
print(df)

# c) Impute numeric columns with mean
num_imputer = SimpleImputer(strategy='mean')
df[['Age', 'Salary']] = num_imputer.fit_transform(df[['Age', 'Salary']])

# d) Impute categorical columns with most frequent value
cat_imputer = SimpleImputer(strategy='most_frequent')
df[['Name', 'Department']] = cat_imputer.fit_transform(df[['Name', 'Department']])

print("\nFinal DataFrame after Imputation:\n", df)
