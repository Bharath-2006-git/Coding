df_rank = df.groupby('rank')[['salary']].mean()
print(df_rank)