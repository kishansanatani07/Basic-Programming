# return "ODD" or "EVEN" accrodingly


def num_is(n):
    if n % 2 == 0 :
        return "ODD"
    else: 
        return "EVEN"

x=int(input("Enter n : "))
print("Number",x,"is "+num_is(x))