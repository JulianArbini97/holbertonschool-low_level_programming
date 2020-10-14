#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
int **puntero;
int i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
puntero = malloc(sizeof(int *) * height);
if (puntero == NULL)
return ('\0');
for (i = 0; i < height; i++)
{
puntero[i] = malloc(sizeof(int) * width);
if (puntero[i] == NULL)
{
for (i = i - 1; i >= 0; i--)
{
free(puntero[i]);
}
free(puntero);
return (NULL);
}
}
for (i = 0; j < width; j++)
puntero[i][j] = 0;
return (puntero);
}
