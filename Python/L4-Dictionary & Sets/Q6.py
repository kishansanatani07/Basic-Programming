#.get and direct print 


student = {
    "name" : "rahul kumar",
    "subjects" : {
        "phy" : 97,
        "chem" : 98,
        "math" : 95
    }
}

# print(student["name2"]) #error
print(student.get("name2")) #no error -> None
