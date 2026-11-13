#WAP to count the number of students with the "A" grade in the following tuple.


grades_tuple = ("C", "D", "A", "A", "B", "B", "A")
count_A = grades_tuple.count("A")
print("Number of students with 'A' grade:", count_A)
print("Number of students with 'A' grade:", grades_tuple.count("A"))

grades_list=list(grades_tuple) #typecasting
grades_list.sort()
print()
print(grades_list)