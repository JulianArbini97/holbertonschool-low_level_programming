#include "holberton.h"
/**
 * _pow_recursion - check the code for Holberton School students.
 * @x: var
 * @y: var
 * Return: int.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
if (y == 1)
{
return (x);
}
return (x * _pow_recursion(x, y - 1));
}
