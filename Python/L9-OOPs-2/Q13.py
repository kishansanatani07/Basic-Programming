#getter & setter decorator


class Temperature:

    def __init__(self, celsius):
        self._celsius = celsius

    # Getter: Reads the temperature in Fahrenheit
    @property
    def fahrenheit(self):
        return (self._celsius * 9 / 5) + 32

    # Setter: Updates Celsius when Fahrenheit is changed
    @fahrenheit.setter
    def fahrenheit(self, value):
        self._celsius = (value - 32) * 5 / 9


temp = Temperature(25)
print(temp.fahrenheit)  # Output: 77.0

# Using the setter to change Fahrenheit directly
temp.fahrenheit = 100
print(temp._celsius)  # Output: 37.77777777777778
