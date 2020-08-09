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
    """
    a = input(boxes)
    """
    while each < len(boxes):
        if rank.get(each) != each:
            return False
        for key in boxes[each]:
            if key < len(boxes) and rank.get(key) != key:
                rank[key] = key
                for box in boxes[key]:
                    if box < len(boxes) and rank.get(box) != box:
                        rank[box] = box
        each += 1

    return True
