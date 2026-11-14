# Define a Circle class to create a circle with radius r using the constructor.Define an Area() method of the class which calculates the area of the circle.Define a Perimeter() method of the class which allows you to calculate the perimeter of the circle.


class Circle:

    def __init__(self, r):
        self.r = r

    def Area(self):
        return (22 / 7) * (self.r**2)

    def Perimeter(self):
        return 2 * (22 / 7) * self.r


c1 = Circle(21)
print(c1.Area())
print(c1.Perimeter())
