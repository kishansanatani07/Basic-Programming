import secrets
import string

def generate_password(length=12):
    characters = string.ascii_letters + string.digits + string.punctuation
    password = "".join(secrets.choice(characters) for _ in range(length)) 
    
    # for _ in range(length): Loops length times. The underscore _ is a Python convention meaning "we don't need to use the loop counter variable."

    #secrets.choice(characters): Securely picks one random character during each loop cycle.

    # "".join(...): Takes all those picked characters and glues them together into a single string with no spaces ("") between them.

    return password

user_input = input("Enter password length (default 12): ")

if user_input.isdigit() and int(user_input) > 0:
    length = int(user_input)
else:
    print("Invalid input. Using default length of 12.")
    length = 12
    
print("Generated Password:", generate_password(length))
