import pandas as pd

data = {
    "Name": ['Alice', 'Bob', 'Charlie', 'David'],
    "Age": [26, 34, 65, 78],
    "City": ['New York', 'Los Angeles', 'Chigao', 'Neredmet'],
    "Occupation": ['Pilot', 'Doctor', 'Agent', 'Student']
}

df = pd.DataFrame(data)
print(df)

df.to_csv(r"D:\Study\Coding\College\Python\dataset.csv", index=False)


