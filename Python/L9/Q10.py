#class method 


class Person:
    name = "anonymous"  

    @classmethod #a decorator  #A @classmethod is a method bound to the class itself rather than to an individual object instance. It receives the class (cls) as its first parameter instead of self, allowing you to read or modify class attributes across all objects.
    def change_name(cls, new_name):
        cls.name = new_name


p1 = Person()
p1.change_name("Rahul Kumar")

print(p1.name)      
print(Person.name)  
