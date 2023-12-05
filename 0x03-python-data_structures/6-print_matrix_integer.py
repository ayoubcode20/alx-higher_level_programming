#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    if isinstance(matrix, list):
        for lis in matrix:
            for num in lis:
                print("{}".format(num), end=' ')
            print('')
    else:
        return
