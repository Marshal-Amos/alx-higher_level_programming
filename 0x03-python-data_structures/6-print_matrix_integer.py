#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    print('\n'.join(' '.join('{:1}'.format(i) for i in row) for row in matrix))
