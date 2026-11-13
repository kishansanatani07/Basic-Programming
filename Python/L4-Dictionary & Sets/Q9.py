s1 = {1, 2, 3, 4}
s2 = {3, 4, 5, 6}


s1.add(7)  # adds an element
print(s1)


s1.remove(2)  # removes an element (crashes if not found)
print(s1)


s1.discard(10)  # removes an element safely (never crashes)
print(s1)


print(s1.union(s2))  # combines both sets (all unique items)


print(s1.intersection(s2))  # gets common items in both sets


print(s1.difference(s2))  # gets items in s1 but NOT in s2


s1.clear()  # empties the entire set
print(s1)
