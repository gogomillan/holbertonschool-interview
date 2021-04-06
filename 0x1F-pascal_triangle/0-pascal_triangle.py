#!/usr/bin/python3
'''
Script with function to calculate Pascal's Triangle
'''


def pascal_triangle(n):
    '''
    Function that calculates the Pascal's Triangle until n term

    Args:
        n (int): how may terms

    Return:
        List with each level of triangle
    '''
    if n <= 0:
        return []
    elif n == 1:
        return [[1]]
    elif n == 2:
        return [[1], [1, 1]]

    t = [[1], [1, 1]]
    width = 3

    while width <= n:
        t.append([0] * width)

        for i in range(width):
            if i == 0:
                t[width - 1][i] = 1
            elif i == (width - 1):
                t[width - 1][i] = 1
            else:
                t[width - 1][i] = t[width - 2][i - 1] + t[width - 2][i]

        width += 1

    return t
