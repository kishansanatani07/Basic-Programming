#wap to to find the first occurrence of the word "learning"


def check_for_line():
  word = "learning"
  data = True
  line_no = 1
  with open("Qh4.txt", "r") as f:
    while data:##Python treats non-empty strings as truthy (True) and empty strings "" as falsy (False).
      data = f.readline()
      if word in data:
        print(line_no)
        return
      line_no += 1

    else: print(-1)


check_for_line()
