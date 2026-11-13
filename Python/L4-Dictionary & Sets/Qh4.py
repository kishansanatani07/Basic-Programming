#Figure out a way to store 9 & 9.0 as separate values in the set. (You can take help of built-in data types)


# One is an integer, the other is a string
my_set = {9, "9.0"}
print(my_set)
# Storing them with a built-in data type label
my_set = {(9, "int"), (9.0, "float")}
print(my_set)
