#Create a Student class that takes name and marks of 3 subjects as arguments in the constructor. Then create a method to print the average.


class Student: 
    def __init__(self, name, marks): 
        self.name = name 
        self.marks = marks

    def get_avg(self): 
        avg = sum(self.marks) / len(self.marks) 
        print(self.name, "average:", avg)

s1 = Student("Tony Stark", [99, 98, 97]) 
s1.get_avg()