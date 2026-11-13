# printing right angled triangle of stars 


i=1
while i<10:
    j=1
    while j<i:
        print("*",end=" ")  # end=" " stopes jumping to next line and adds a " " between next star and last star 
        j+=1
    print()
    i+=1

