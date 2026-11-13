# range function 


for i in range(6):
    print(i) # range(5) is a function that gives a sequential range=>0,1,2,3,4 // range(1,5,1)=>1,2,3,4 //range(5,1,-1)=>5,4,3,2


for i in range(1, 6, 1):   # Counts up: 1, 2, 3, 4, 5
    print(i)

for i in range(5, 0, -1):  # Counts down: 5, 4, 3, 2, 1
    print(i)


r = range(10, 50, 10)  # Represents: 10, 20, 30, 40

print(r[0])   # First item: 10
print(r[1])   # Second item: 20
print(r[-1])  # Last item: 40
print(r[-2])  # Second to last item: 30
