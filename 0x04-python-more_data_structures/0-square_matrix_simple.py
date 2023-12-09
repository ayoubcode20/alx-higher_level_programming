#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    if matrix:
        new_matrix = []
        for i, row in enumerate(matrix):
            new_matrix.append(list(map(lambda x: x*x, row)))
        return new_matrix
