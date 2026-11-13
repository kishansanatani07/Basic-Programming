# waf to find fact of n


def fact(n):
    if n==0 :
      return 1
    result=1
    for i in range(1,n+1,1):
        result*=i
    return result

# def fact(n):
#     if n==0 :
#        return 1
#     else : return n*fact(n-1)

x=int(input("Enter x : "))
print("factorial of",x,"is : ",fact(x))
