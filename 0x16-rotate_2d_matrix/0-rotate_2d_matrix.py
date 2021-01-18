#!/usr/bin/python3
"""
Script for the Function rotate_2d_matrix
"""

def rotate_2d_matrix(matrix):
    """
    Function that rotates the matrix 90 degrees
    """
    """ Create the result matrix """
    rows, cols = len(matrix[0]), len(matrix)
    res = [([0]*cols) for i in range(rows)]
    """ Fill out the result matrix """
    for i in range(0, len(matrix[0])):
        k = 2
        for j in range(0, len(matrix)):
            res[i][j] = matrix[k - j][i]
    """ Copy each element from the new matrix """
    matrix[:] = list(res)
