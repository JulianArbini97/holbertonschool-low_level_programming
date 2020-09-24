#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int a, b;

if (n <= 0)
_putchar('\n');

for (a = 0; a < n; a++)
{
for (b = 0; b <= a; b++)
{
if (a == b)
{
_putchar('\\');
_putchar('\n');
}
else
{
_putchar(' ');
}
}
}
}
