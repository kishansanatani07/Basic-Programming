#list methods


nums = [10, 20, 30, 40, 50]
print(nums)

nums.append(60)#adds one element at last
print(nums)
nums.sort()#sort in increasing order 
print(nums)
nums.sort(reverse=True)#sorts in decreasing order 
print(nums)
nums.reverse()#reverses the list
print(nums)
nums.insert(2,500)#inserts 500 at 2nd index 
print(nums)
nums.remove(500)# finds first occurance of 500 and removes 
nums.pop(1)#removes element at 1 index 

print()
print()
print()

print(nums.append(70))
print(nums)
print(nums.sort())
print(nums)
print(nums.sort(reverse=True))
print(nums)
print(nums.reverse())
print(nums)
print(nums.insert(2,500))
print(nums)


names = ["Rahul", "Kishan", "Laddu", "Raghav"]

print(names)
names.sort()
print(names)

names.sort(reverse=True)
print(names)

names.sort(key=len)
print(names)
