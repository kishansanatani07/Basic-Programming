#print factoril of n using for


n=int(input("Enter n : "))
fact=1
for i in range(n):
    fact*=i+1
else:
    print("Factorial of ",n,"is",fact)


n=int(input("Enter n : "))
fact=1
for i in range(1,n+1,1):
    fact*=i
else:
    print("Factorial of ",n,"is",fact)