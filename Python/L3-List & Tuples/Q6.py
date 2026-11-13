#tuples methods


tpl = (10, 20, 30, 20, 40)

# 1. count() - Counts how many times an item appears
print(tpl.count(20))  # Returns 2
print(tpl.count(99))  # Returns 0 (item not found)

# 2. index() - Finds the first position (index) of an item
print(tpl.index(30))  # Returns 2
print(tpl.index(20))  # Returns 1 (stops at the first match)
