#break and continue 


j=1
while j<=10:
    if j==5:
        j+=1
        continue
    print(j,"hello world",j)
    j+=1


k=1
while k<=10:
    print(k,"hello world",k)
    k+=1
    if k==5:
        break
 