#write a function to replace each "java" with python in the file "Qh2.txt"


def replace_word():
  # Step 1: Read existing data
  with open("Qh2.txt", "r") as f:
    data = f.read()

  # Step 2: Replace "Java" with "Python"
  new_data = data.replace("Java", "Python")
  print(new_data)

  # Step 3: Overwrite the file with updated data
  with open("practice.txt", "w") as f:
    f.write(new_data)


replace_word()
