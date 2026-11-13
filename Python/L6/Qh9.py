# buffer solution for last question 


def print_list(idx, lst):
    if idx < 0:
        return
    
    print_list(idx - 1, lst)

    print(lst[idx])

my_list = [1, 2, 3, 4, 5]
print_list(len(my_list) - 1, my_list)
