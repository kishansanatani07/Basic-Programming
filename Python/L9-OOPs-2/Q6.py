# single inheritance 



class Car:
    color = "black"

    @staticmethod
    def start():
        print("car started..")

    @staticmethod
    def stop():
        print("car stopped.")



class ToyotaCar(Car):
    def __init__(self, name):
        self.name = name



car1 = ToyotaCar("Fortuner")
car2 = ToyotaCar("Prius")

print(car1.name)
print(car1.color)
car1.start()
car1.stop()


print(car2.name)
print(car2.color)
car2.start()
car2.stop()
