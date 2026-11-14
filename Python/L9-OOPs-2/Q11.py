# @property decorator 
# (@property) and setters (@<name>.setter).Underscore Convention: Notice the underscore. This tells Python to store the actual data in a hidden variable so the getter and setter do not call themselves in an infinite loop && The setter decorator must always match the exact name of the @property method above it



class student :
    def __init__(self,phy,chem,math):
        self.phy=phy
        self.chem=chem
        self.math=math
    #     self.pctg=str((self.phy+self.chem+self.math)/3)+"%"

    # def calc_pctg(self):
    #     self.pctg=str((self.phy+self.chem+self.math)/3)+"%"

    @property
    def pctg(self):
        return str((self.phy+self.chem+self.math)/3)+"%"

s1=student(98,97,99)
print(s1.pctg)
s1.phy=86
print(s1.phy)
# s1.calc_pctg()
print(s1.pctg)