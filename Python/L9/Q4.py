#Private (Like) methods


class Person:
    __name = "anonymous"

    def __hello(self):
        print("hello person!")

    def welcome(self):
        self.__hello()

p1 = Person()
p1.welcome()
print(p1.__hello())
print(p1.__name())

