#Write a Python program that generates a random target number between 1 and 100 and asks the user to guess it in a continuous loop. The program should allow the user to quit at any time, handle invalid (non-numeric) inputs without crashing, and give hints whether each guess is too big or too small until the user guesses the correct number.


import random

target = random.randint(1, 100)

while True:
    userChoice = input("Guess the target or Quit : ")
    if userChoice.lower() == "quit":
        break
    
    if not userChoice.isdigit():
        print("Please enter a valid number.")
        continue

    userChoice = int(userChoice)
    if userChoice == target:
        print("Success : Correct Guess!!")
        break
    elif userChoice < target:
        print("your number was too small. Take a bigger guess..")
    else:
        print("your number was too big. Take a smaller guess..")

print("-----GAME OVER-----")
