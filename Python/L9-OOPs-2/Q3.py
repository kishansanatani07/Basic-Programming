#private (like) attributes


class Account:
    def __init__(self,acc_no,acc_pwd):
        self.acc_no=acc_no
        # self.acc_pwd=acc_pwd
        self.__acc_pwd=acc_pwd  ## two underscores makes it private

    def Print(self):
        print(self.acc_no)
        print(self.__acc_pwd)

Kishan=Account("0001","00@01")
print(Kishan.acc_no)
# print(Kishan.__acc_pwd)
Kishan.Print()