def nature(x):
    if(x%2==0): return "Even"
    else: return "Odd"

x=int(input("Enter your numbers: "))
print("It's",nature(x))