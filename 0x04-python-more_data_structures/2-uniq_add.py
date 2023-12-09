#!/usr/bin/python3
def uniq_add(my_list=[]):
    b = 0
    if my_list:
        for num in set(my_list):
            b += num
    return b
