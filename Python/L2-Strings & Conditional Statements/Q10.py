# nesting example 


age = int(input("Enter your age: "))

if age >= 12:
    height = int(input("Enter your height in cm: "))
    
    if height >= 140:
        print("You can ride the roller coaster!")
    else:
        print("Sorry, you are old enough but too short for this ride.")
else:
    print("Sorry, you must be at least 12 years old to ride.")
