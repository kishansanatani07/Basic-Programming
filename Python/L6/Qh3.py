# waf to print elements of a list in a single line 


def print_list(items):
    for el in items:
        print(el,end=" ")

list=[1,2,3,4,5]
print_list(list)