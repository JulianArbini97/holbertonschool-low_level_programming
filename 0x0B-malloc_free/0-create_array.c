#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
char *p;
unsigned int a = 0;
if (size == 0)
{
return (NULL);
}
if (p == NULL)
return (NULL);
p = (char *) malloc(size);
for (a = 0; a < size; a++)
p[a] = c;
return (p);
}
