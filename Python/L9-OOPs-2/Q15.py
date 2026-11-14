#polymorphism : operator overloading


# print(1 + 2)  # 3
# print("apna" + "college")  # concatenate
# print([1, 2, 3] +[4,5,6])  # merge

#dunder fnxns
# • a + b   #addition          a.__add__(b)
# • a - b   #subtraction       a.__sub__(b)
# • a * b   #multiplication    a.__mul____(b)
# • a / b   #division          a.__truediv____(b)
# • a % b   #addition          a.__mod____(b) 



class Complex:

    def __init__(self, real, img):
        self.real = real
        self.img = img

    def show_number(self):
        print(f"{self.real} + {self.img}i")

    def __add__(self, other):
        new_real = self.real + other.real
        new_img = self.img + other.img
        return Complex(new_real, new_img)

    def __sub__(self, other):
        new_real = self.real - other.real
        new_img = self.img - other.img
        return Complex(new_real, new_img)


num1 = Complex(1, 3)
num1.show_number()

num2 = Complex(4, 6)
num2.show_number()

num3 = num1 + num2
num3.show_number()

num4 = num2 - num1
num4.show_number()
