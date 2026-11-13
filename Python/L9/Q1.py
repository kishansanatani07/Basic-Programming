#del keyword 
#used to delete objects or its properties initialized in the code 


class Student: 
    def __init__(self, name, marks): 
        self.name = name 
        self.marks = marks

    def get_avg(self): 
        avg = sum(self.marks) / len(self.marks) 
        print(self.name, "average:", avg)

s1 = Student("Tony Stark", [99, 98, 97]) 
s1.get_avg()
s2=Student("Abhishek",[98,93,94])
print(s2.name,"\n"+str(s2.marks))

del s1.name
print(s1.marks)
print(s1.name)

del s1
print(s1.name,"\n"+str(s1.marks))
