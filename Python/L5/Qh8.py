# search for x in the following tuple


square = (1, 4, 9, 16, 25, 36, 49, 64, 81, 100)
x = int(input("Enter x : "))
i=1
for el in square:
    if x == el:
        print("x is stored at", i, "index of the tuple.")
        print("And it is element number", i + 1, "in the tuple.")
        break
    i += 1
else:
    print(x, "was not found in the tuple.")#if loop works normally this will print 