# Removing a file 


import os as kishan ##os is a library/module and kishan is alias given by me for os library 

with open("Q9.txt","w+") as f:
    f.write("Kishan")
    f.seek(0)
    print(f.read())
str(input("Enter del to delete file : "))
kishan.remove("Q9.txt")