#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - prints buffer in hexa
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
int *p;
int a;
if (min > max)
{
return (0);
}
p = malloc(sizeof(int) * (max - min + 1));
if (!p)
return (0);
for (a = 0; min <= max; min++, a++)
{
p[a] = min;
}
return (p);
}
