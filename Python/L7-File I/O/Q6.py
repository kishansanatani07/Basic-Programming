#read and write mode


f=open("Q6.txt","r+")
f.write("Sun idhar meri bat\ntujhe samjh nahi ata kya")
f.seek(0)# takes the curser back to 0
print(f.read())

f.write("\nhelloo sirrrr")
f.close()