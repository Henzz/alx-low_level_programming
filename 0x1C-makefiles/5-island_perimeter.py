#!/usr/bin/python3
"""
File: 5-island_perimeter.py
"""


def island_perimeter(grid):
    """
    island_perimeter: calcualtes the perimeter of an island
    """
    if not grid:
        return 0

    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Add 4 sides initially

                # Check top side
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2

                # Check left side
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
