#Class and Instance Attributes


class Student:
    College_name="Dr. AITD" #class attributes  //belongs to all object / whole class
    def __init__(self,name,age):
        self.name=name #instance attribute  //each object has distinct value 
        self.age=age
    def print_(self):
        print(self.name,"\n"+str(self.age))
s1=Student("kishan",18)
s2=Student("divyansh",19)
print(s1.name)
print(s1.age)
print(s1.College_name)
print(Student.College_name)
print()
print(s2.name)
print(s2.age)
print(s2.College_name)
print(Student.College_name)
print()
s1.print_()