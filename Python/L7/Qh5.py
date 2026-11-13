#wap to check the number of even numbers in the txt file 


count = 0
with open("Qh5.txt", "r") as f:
  data = f.read()

  nums = data.split(",") ## split into parts based on separator (string method)
  for val in nums:
    if int(val) % 2 == 0:
      count += 1

print(count)
