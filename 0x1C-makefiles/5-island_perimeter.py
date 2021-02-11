#!/usr/bin/python3
""" Perimeter function"""


def island_perimeter(grid):
    """ def """
    per = 0

    for fila in range(len(grid)):
        for celda in range(len(grid[0])):
            if grid[fila][celda] == 1:
                if fila <= 0:
                    per = per + 1
                elif grid[fila - 1][celda] != 1:
                    per = per + 1

                if celda <= 0:
                    per = per + 1
                elif grid[fila][celda - 1] != 1:
                    per = per + 1

                if fila >= (len(grid) - 1):
                    per = per + 1
                elif grid[fila + 1][celda] != 1:
                    per = per + 1

                if celda >= (len(grid[0]) - 1):
                    per = per + 1
                elif grid[fila][celda + 1] != 1:
                    per = per + 1
    return per
    