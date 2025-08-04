import pandas as pd

df1 = pd.read_csv(r'C:/Users/bhara/Downloads/Telegram Desktop/employee_salary_dataset.csv')
df2 = pd.read_csv(r'C:/Users/bhara/Downloads/Telegram Desktop/flight_data.csv')
df3 = pd.read_excel(r'C:/Users/bhara/Downloads/Telegram Desktop/iris.xlsx')
# print(df1.head())
# print(df2.head())
# print(df3.head())
# print(df1.tail())
# print(df2.tail())
# print(df3.tail())   
print(df1['salary'].dtype)
print(df1['rank'].dtype)
print(df1['service'].dtype)
print(df1['gender'].dtype)
print(df2['Airline'].dtype)
print(df2['Duration'].dtype)
print(df2['Price'].dtype)
print(df3['sepal width (cm)'].dtype)
print(df3['petal length (cm)'].dtype)


