# file opening closing using "with"


with open("Q8.txt", "w") as file:
    file.write("Hello, Python!\n")
    file.write("File handling is clean and safe.")

# No need to call file.close() here; Python already closed it.
