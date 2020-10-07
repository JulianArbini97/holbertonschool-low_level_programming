#include "holberton.h"
#include <stdio.h>

/**
 * sqr - check the code for Holberton School students.
 * @a: var
 * @b: var
 * Return: Always 0.
 */
int sqr(int a, int b)
{
if (a * a == b)
{
return (a);
}
else if (a * a > b)
{
return (-1);
}
return (sqr(a + 1, b));
}
/**
 * _sqrt_recursion - check the code for Holberton School students.
 * @n: var
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
return (sqr(1, n));
}
