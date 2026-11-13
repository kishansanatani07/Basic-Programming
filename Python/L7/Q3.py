#writing to a file (overwrite)


f=open("Q3.txt","w")
f.write("I am Kishan")
f.close()
f1=open("Q3.txt","w")
f1.writelines(["a\n","b\n","c\n"])
f1.close()