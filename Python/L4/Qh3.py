#WAP to enter marks of 3 subjects from the user and store them in a dictionary. Start with an empty dictionary & add one by one. Use subject name as key & marks as value


marks = {}

sub1 = input("Enter first subject name: ")
score1 = int(input("Enter marks for " + sub1 + ": "))
marks[sub1] = score1

sub2 = input("Enter second subject name: ")
score2 = int(input("Enter marks for " + sub2 + ": "))
marks[sub2] = score2

sub3 = input("Enter third subject name: ")
score3 = int(input("Enter marks for " + sub3 + ": "))
marks[sub3] = score3

print(marks)
