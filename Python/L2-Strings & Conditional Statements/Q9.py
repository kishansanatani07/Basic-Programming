#  grade calculator 



marks = int(input("Enter marks: "))

if marks >= 90:    # no need of () 
    grade = "A"
elif marks >= 80:
    grade = "B"
elif marks >= 70:
    grade = "C"
else:
    grade = "D"

print("your grade is", grade)
