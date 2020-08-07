#!/usr/bin/python3
"""
Script for the function canUnlockAll
"""


def canUnlockAll(boxes):
    """
    Identify if all boxes can be opened
    """
    rank = {0: 0}
    each = 0
    while each < len(boxes):
        if not boxes[each] and each < (len(boxes) - 1):
            return False
        for key in boxes[each]:
            rank[key] = key
        each += 1

    for each in range(0, len(boxes)):
        if rank.get(each) != each:
            return False

    return True
