# getter & setter 


class Student:

    def __init__(self, phy, chem, math):
        self._phy = phy
        self.chem = chem
        self.math = math

    # Getter for Physics
    @property
    def phy(self):
        return self._phy

    # Setter for Physics: Ensures marks are realistic
    @phy.setter
    def phy(self, marks):
        if 0 <= marks <= 100:
            self._phy = marks
        else:
            print("Invalid marks! Please enter a value between 0 and 100.")

    # Getter for Percentage
    @property
    def pctg(self):
        avg = (self._phy + self.chem + self.math) / 3
        return f"{round(avg, 2)}%"


s1 = Student(98, 97, 99)
print(s1.pctg)  # Output: 98.0%

s1.phy = 86  # Calls the setter
print(s1.pctg)  # Output: 94.0%

s1.phy = 150  # Output: Invalid marks! Please enter a value between 0 and 100.
