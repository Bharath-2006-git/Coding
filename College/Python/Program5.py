import pandas as pd
data = {'Salary': [40000, 42000, 43000, 44000, 45000,1000000],}
df = pd.DataFrame(data)

Q1=df['Salary'].quantile(0.25)
Q3=df['Salary'].quantile(0.75)
IQR=Q3-Q1

lower_bound=Q1-1.5*IQR
upper_bound=Q3+1.5*IQR

print(f"Lower Bound: {lower_bound}")
print(f"Upper Bound: {upper_bound}")

outliers=df[(df['Salary']<lower_bound) | (df['Salary']>upper_bound)]
print("Outliers detected:")
print(outliers)

def cap_values(x):
    if x < lower_bound:
        return lower_bound
    elif x > upper_bound:
        return upper_bound
    else:
        return x
    
df['Salary']=df['Salary'].apply(cap_values)
print("Data after capping outliers:")
print(df) 