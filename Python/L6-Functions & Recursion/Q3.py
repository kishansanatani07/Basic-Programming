# recursion 


def show(n):
    if n==0: 
        return
    print(n)
    show(n-1)


# recursion buffer



x=int(input("Enter n : "))
show(x)


def show(n):
    if n==0: 
        return
    show(n-1)
    print(n)

x=int(input("Enter n : "))
show(x)