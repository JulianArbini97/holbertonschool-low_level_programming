#include "holberton.h"

/**
 * print_triangle - check the code for Holberton School students.
 * @size: var
 * Return: Always 0.
 */
void print_triangle(int size)
{
int a;
int b;
if (size > 0)
{
for (a = 1; a <= size; a++)
{
for (b = 1; b <= size; b++)
{
if (b <= size - a)
{
_putchar (' ');
}
else
{
_putchar ('#');
}
}
_putchar ('\n');
}
}
else
{
_putchar ('\n');
}
}
