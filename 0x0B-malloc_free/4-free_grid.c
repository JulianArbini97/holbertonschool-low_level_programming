#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
  int i;
  
 for (i = 0; i < height; ++i) 
{
      free(grid[i]);
    }
    free(grid);
  }
