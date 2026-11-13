#waf to print all elements ofa list using recursion 


def print_list(idx,lst):
    if(idx==len(lst)):
        return
    print(lst[idx])
    return print_list(idx+1,lst)


my_list = [1, 2, 3, 4, 5]
print_list(0, my_list)