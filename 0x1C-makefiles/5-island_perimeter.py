#!/usr/bin/python3
"""Perimeter of isand described in grid """


def island_perimeter(grid):
    """Returns perimeter of the island
    Attributes:
             grid (list): list of intergers.
    Args:
        island (int): the perimeter of island
        surround (int): the surround in 0 or 1 for water/
        island zone.
    """
    island = 0
    surround = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                island = island + 1
                if x < len(grid ) -1 and grid[x+1][y] == 1:
                    surround = surround + 1
                if y < len(grid[x])-1 and grid[x][y+1] == 1:
                    surround = surround + 1
    return island*4 - 2*surround
