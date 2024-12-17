x=int(input("Enter something: "))
match x:
    case 1:
        print("Hello")
    case 2:
        print("See you soon")
    case 3:
        print("How are you?")
    case _ if(x==6):
        print("You entered 6 but it is not in menu")
    case _ if(x==4):
        print("You entered 4 but it is not in the menu")
    case _:
        print("Invalid")