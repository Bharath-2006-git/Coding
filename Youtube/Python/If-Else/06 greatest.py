x,y,z=map(int,input("Enter three numbers: ").split())
if(x>y and x>z): print(x,"is greatest")
elif(y>x and y>z): print(y,"is greatest")
else: print(z,"is greatest")