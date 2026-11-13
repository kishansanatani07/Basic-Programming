# factorial using recursion 


def fact(n):
    if n==0:
        return 1
    return n*fact(n-1)


x=int(input("Enter n : "))
print("Factorial of",x,"is",fact(x))