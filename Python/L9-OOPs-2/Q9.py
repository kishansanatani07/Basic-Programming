# super method 


class Car:
    def __init__(self, car_type):
        self.car_type = car_type

    @staticmethod
    def start():
        print("car started..")


class ToyotaCar(Car):
    def __init__(self, name, car_type):
        self.name = name
        super().__init__(car_type) 
        super().start()        

car1 = ToyotaCar("Prius", "electric")
print(car1.name)
print(car1.car_type)
