# __init__ Function Constructor)
#class Student: def __init__(self, fullname): self.name = fullname # creating object s1 = Student("karan") print(s1.name) self is a reference to the current object. It is used to access the variables that belong to that object. Python passes it automatically, so we don't write it when creating the object.



class Student: 
    def __init__(self, fullname): 
        self.name = fullname # creating object 

        
s1 = Student("karan") 
print(s1.name)
