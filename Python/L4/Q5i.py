#Dictionary methods 


user = {"name": "Alice", "age": 25, "city": "Delhi"}


# .keys() gets all keys
all_keys = user.keys()
print(all_keys)


# .values() gets all values
all_values = user.values()
print(all_values)


# .items() gets key-value pairs
all_pairs = user.items()
print(all_pairs)


# .get() safely reads a value
user_age = user.get("age")
print(user_age)


# .update() adds/changes many items
user.update({"role": "Developer", "age": 26})
print(user)


# .pop() removes item by key
removed_city = user.pop("city")
print(user)


# .clear() empties the dictionary
user.clear()
print(user)
