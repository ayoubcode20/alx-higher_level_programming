#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    if not isinstance(matrix, list):
        return
    if not all(isinstance(row, list) for row in matrix):
        return
    for lis in matrix:
        for num in lis:
            print("{:d}".format(num), end=' ')
        print('')
