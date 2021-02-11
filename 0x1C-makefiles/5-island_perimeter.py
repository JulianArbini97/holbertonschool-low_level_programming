#!/usr/bin/python3
""" Perimeter function"""

def island_perimeter(grid):
    perimetro = 0;
    for fila in grid:
        for celda in fila:
            if fila[celda] == 1:
                perimetro = perimetro + 2
    perimetro = perimetro + 2
    return perimetro