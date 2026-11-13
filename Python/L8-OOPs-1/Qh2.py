#Create an Account class with 2 attributes: balance and account number. Create methods for debit, credit and printing the balance.



class Account: 
    def __init__(self, balance, acc_no): 
        self.balance = balance 
        self.acc_no = acc_no 
    def debit(self, amount): 
        self.balance -= amount 
        print("Rs.", amount, "was debited") 
        self.get_balance() 
    def credit(self, amount): 
        self.balance += amount 
        print("Rs.", amount, "was credited") 
        self.get_balance() 
    def get_balance(self): 
        print("Total balance =", self.balance) #A method can call another method of the same object using  self , like self.get_balance() .

acc1 = Account(10000, 12345) 
acc1.debit(1000) 
acc1.credit(500)