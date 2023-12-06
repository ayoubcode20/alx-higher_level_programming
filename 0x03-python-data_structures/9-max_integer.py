#!/usr/bin/python3
def max_integer(my_list=[]):
    res = None
    if my_list:
        for i in range(len(my_list) - 1):
            if my_list[i] > my_list[i + 1]:
                res = my_list[i]
            else:
                res = my_list[i + 1]
    return res
