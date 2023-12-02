#!/usr/bin/python3
for i in range(9):
    j = i + 1
    while j <= 9:
        if i == 8:
            print("{}{}".format(i, j), end='\n')
        else:
            print("{}{}".format(i, j), end=', ')
        j += 1
