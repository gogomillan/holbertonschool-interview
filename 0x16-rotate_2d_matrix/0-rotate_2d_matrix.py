#!/usr/bin/python3
"""
Script for the Function rotate_2d_matrix
"""


def rotate_2d_matrix(matrix):
    """
    Function that rotates the matrix 90 degrees
    """
    r = len(matrix)
    c = len(matrix[0])
    r_matrix = [[0 for i in range(r)] for j in range(c)]
    c_matrix = matrix[:]
    i = 0
    while i < r:
        j = 0
        while j < c:
            r_matrix[j][len(c_matrix) - 1 - i] = c_matrix[i][j]
            j += 1
        matrix.pop()
        i += 1

    i = 0
    while i < c:
        matrix.append(r_matrix[i])
        i += 1
