#Static methods don't use the self parameter. They work at the class level and are marked with the @staticmethod decorator.


class Student: 
    @staticmethod          # decorator 
    def college(): 
        print("ABC College") 
        
Student.college() 
s1 = Student() 
s1.college()

#Decorators wrap another function to extend its behaviour without permanently changing it.