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
    """ Going through the boxes """
    while each < len(boxes):
        """ Verifying if there is a key for this box """
        if rank.get(each) != each:
            return False
        """ Getting the keys from the box, if there are """
        for key in boxes[each]:
            if key < len(boxes) and rank.get(key) != key:
                rank[key] = key
                """ For each key, verifying the matched box """
                for box in boxes[key]:
                    if box < len(boxes) and rank.get(box) != box:
                        rank[box] = box
        each += 1

    return True
