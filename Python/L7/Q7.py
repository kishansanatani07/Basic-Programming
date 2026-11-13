#append and read mode


f=open("Q7.txt","a+")
print(f.tell())
f.write("Sun idhar meri bat\ntujhe samjh nahi ata kya")
f.seek(0)# takes the curser back to 0
print(f.read())
print(f.tell())
f.write("\nhelloo sirrrr")
print(f.tell())  # tells posititon of curser 
f.close()