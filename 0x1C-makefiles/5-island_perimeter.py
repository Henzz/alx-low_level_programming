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
                # Check top side
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                # Check bottom side
                if i == rows - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                # Check left side
                if i == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                # Check right side
                if j == cols - 1 or grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter
