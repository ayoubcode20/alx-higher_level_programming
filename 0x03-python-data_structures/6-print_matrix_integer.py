#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    if not isinstance(matrix, list):
        return
    if not all(isinstance(row, list) for row in matrix):
        return
    row_len = len(matrix[0])
    if not all(len(row) == row_len for row in matrix):
        return
    for lis in matrix:
        for idx in range(row_len):
            if idx == row_len - 1:
                print("{:d}".format(lis[idx]), end='$')
            else:
                print("{:d}".format(lis[idx]), end=' ')
        print('')
