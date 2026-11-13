# waf to create a recursive function to find sum of first n numbers


def sum(n):
    if(n==0):
        return 0
    return n+sum(n-1)

x=int(input("Enter n : "))
print(sum(x))