#!/usr/bin/python3
"""
Script that contains  a method that determines if a given data set represents a
valid UTF-8 encoding.
"""


def validUTF8(data):
    """
    method that determines if a given data set represents a valid UTF-8
    encoding.

    Arg:
        data (list): The data set can contain multiple characters. The data
        will be represented by a list of integers
    Return:
        Return: True if data is a valid UTF-8 encoding, else return False
    """
    _char = 0
    for value in data:
        byte = value & 255
        if _char:
            if byte >> 6 != 2:
                return False
            _char -= 1
            continue
        while (1 << abs(7 - _char)) & byte:
            _char += 1
        if _char == 1 or _char > 4:
            return False
        _char = max(_char - 1, 0)
    return _char == 0
