# methods
# Methods are functions that belong to objects. Their first parameter is self .


class Student:
    def __init__(self, fullname):
        self.name = fullname 
    def hello(self): 
        print("hello", self.name) 

s1 = Student("karan") 
s1.hello()