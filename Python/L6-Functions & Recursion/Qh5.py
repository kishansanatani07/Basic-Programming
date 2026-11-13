#waf to convet usd into inr


def in_usd(inr):
    return inr*0.011

def in_inr(usd):
    return usd*93.46

if(int(input("Enter 1 for inr to usd , 2 for usd to inr : "))==1):
    inr=float(input("Enter amount in inr : "))
    print(in_usd(inr))
else:
    usd=float(input("Enter amount in usd : "))
    print(in_inr(usd))