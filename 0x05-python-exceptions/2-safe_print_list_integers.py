#!/usr/bin/python3
def safe_print_list_integers(my_list=[], x=0):
    count = 0
    try:
        for i in range(x):
            if type(my_list[i]) == int:
                print("{:d}".format(my_list[i]), end="")
                count += 1
    except IndexError as e:
        if "list index out of range" not in str(e):
            raise e
    finally:
        print()
        return count
