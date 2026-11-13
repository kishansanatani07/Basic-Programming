# print multiplication table of a number n using for and range


n=int(input("Entr n : "))
for i in range(10):
    print(n,"*",i+1,"=",n*(i+1))