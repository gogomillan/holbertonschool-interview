#!/usr/bin/python3
"""
Script for the function minOperations(n)
"""


def minOperations(n):
    """
    Function to find the min operations
    """
    if n < 1:
        return 0

    min_o = n
    divisor = 1
    while divisor <= n:
        if (n % divisor) == 0:
            quotient = n // divisor
            oper = divisor + quotient
            if oper < min_o:
                min_o = oper
        divisor += 1

    return min_o
