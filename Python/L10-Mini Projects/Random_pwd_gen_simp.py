#Write a Python program that asks the user for a desired password length and generates a secure random password containing uppercase letters, lowercase letters, digits, and special punctuation characters. If the user enters an invalid input or non-positive number, the program should safely fall back to a default length of 12 characters.


import random
import string #Imports Python's built-in string module, which gives us ready-made lists of letters, numbers, and symbols so we do not have to type them out manually.

pass_len = 12
charValues = string.ascii_letters + string.digits + string.punctuation

# 	• string.ascii_letters gives all lowercase and uppercase letters (a-z, A-Z).
# 	• string.digits gives all numbers (0-9).
# 	• string.punctuation gives special symbols (!@#$%^&*...).


password = ""
for i in range(pass_len):
    password += random.choice(charValues) # picks one single random character from our combined pool.

print("Your random password is:", password)