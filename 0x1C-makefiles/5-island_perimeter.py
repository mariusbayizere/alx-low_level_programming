#!/usr/bin/python3
"""This module are containing the function return island module"""


def island_perimeter(grid):
    """This function will return perimeter the Island described in Grid"""
    xxx = 0
    flex_end = len(grid) - 1
    flex_start = len(grid[0]) - 1

    for x, r in enumerate(grid):
        for y, k in enumerate(r):
            if k == 1:
                if x == 0 or grid[x - 1][y] != 1:
                    xxx += 1
                if y == 0 or grid[x][y - 1] != 1:
                    xxx += 1
                if y == flex_start or grid[x][y + 1] != 1:
                    xxx += 1
                if x == flex_end or grid[x + 1][y] != 1:
                    xxx += 1
    return xxx
