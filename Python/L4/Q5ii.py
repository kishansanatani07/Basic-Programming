#Dictionary methods 


user = {"name": "Alice", "age": 25, "city": "Delhi"}


print(user.keys())  # prints all keys


print(user.values())  # prints all values


print(user.items())  # prints all pairs


print(user.get("age"))  # reads age safely


user.update({"role": "Developer"})  # adds a new pair
print(user)


print(user.pop("city"))  # removes city and prints it
print(user)


user.clear()  # empties everything
print(user)
