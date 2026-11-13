# to find the if the word "learning" is in the txt file


def check_for_word():
  word = "learning"
  with open("practice.txt", "r") as f:
    data = f.read()
    if data.find(word) != -1:  ##find is a method in strings
      print("Found")
    else:
      print("Not Found")


check_for_word()
