import pandas as pd

df = pd.read_csv(r"D:/Study/Coding/College/Python/programpandas.csv")
# print(df.head())
# print(df.dtypes)
# print(df.gender)

# df_rank = df.groupby('rank').mean(numeric_only=True)
# print(df_rank)

# df_rank = df.groupby('rank')[['salary']].mean()
# print(df_rank)

df_p=df.groupby(['rank'], sort=False)[['salary']].mean()
print(df_p)
df_p=df.groupby(['rank'])[['salary']].mean()
print(df_p)