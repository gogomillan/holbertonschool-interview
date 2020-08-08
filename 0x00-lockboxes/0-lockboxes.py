#!/usr/bin/python3
"""
Script for the function canUnlockAll
"""


def findKeys(boxes, each, rank):
    """
    Recurtion for the key in the boxes
    """
    """
    print("R-{}|".format(boxes[each]), end= '')
    r = input('')
    """
    if not boxes[each]:
        """
        print("(Empty)", end='')
        """
        return
    for key in boxes[each]:
        if rank.get(key) != key and key < len(boxes):
            rank[key] = key
            findKeys(boxes, key, rank)
    

def canUnlockAll(boxes):
    """
    Identify if all boxes can be opened
    """
    rank = {0: 0}
    each = 0
    """
    a = input(boxes)
    """
    while each < len(boxes):
        if rank.get(each) != each:
            return False
        findKeys(boxes, each, rank)
        each += 1

    for each in range(0, len(boxes)):
        if rank.get(each) != each:
            return False

    return True
