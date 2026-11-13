#string methods



str = "i am a coder."

# 1. endswith() - returns True if the string ends with the specified substring
print(str.endswith("er."))  # Output: True

# 2. capitalize() - capitalizes the first character of the string
print(str.capitalize())     # Output: I am a coder.

# 3. replace(old, new) - replaces all occurrences of 'old' with 'new'
print(str.replace("coder", "programmer"))  # Output: I am a programmer.

# 4. find(word) - returns the 1st index of the 1st occurrence of the substring
print(str.find("am"))       # Output: 2

# 5. count(substr) - counts the total occurrences of the substring in the string
print(str.count("am"))      # Output: 1
