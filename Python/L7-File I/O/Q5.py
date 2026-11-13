# write and read mode


f=open("Q5.txt","w+")
f.write("Sun idhar meri bat\ntujhe samjh nahi ata kya")
f.seek(0)# takes the curser back to 0
print(f.read())
f.close()