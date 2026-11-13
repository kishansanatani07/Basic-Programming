# COnditional Statements 


# if-elif-else
"""
if(cond1):  //: is used for block instead of {}
    statement 1  //"    " identation for block 
elif(cond 2):
    statement 2
else:
    statement N
"""


age=int(input("Enter your age : "))
if(age<=13):
    print("You are a Kid.")
elif(age>=13 and age<18):
    print("you are a School Boy.")
elif(age>=18 and age<100):
    print("You are an adult.")
else:
    print("Enter valid age.")