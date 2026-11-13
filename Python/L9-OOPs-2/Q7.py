# multi level inheritance 


class Car:
    @staticmethod
    def start():
        print("car started..")

    @staticmethod
    def stop():
        print("car stopped.")


class ToyotaCar(Car):
    def __init__(self, brand):
        self.brand = brand


class Fortuner(ToyotaCar):
    def __init__(self, fuel_type):
        self.fuel_type = fuel_type



car1 = Fortuner("diesel")

print(car1.fuel_type)  
car1.start()           
car1.stop()            
