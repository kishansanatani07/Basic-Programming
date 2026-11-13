#reading a file 


file=open("Q2.txt","r")
data=file.read()

print(data)
print(type(data))

file.seek(0)  # moves curser in file back to 0  
data=file.read(5)

print(data)

file.seek(0)  
data=file.readline()
print(data)
data=file.readline()
print(data)
data=file.readline()
print(data)


file.close()