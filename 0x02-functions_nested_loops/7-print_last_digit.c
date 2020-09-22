#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @n: variable
 * Return: Always 0.
 */
int print_last_digit(int n)
{
int r;

r = n % 10;

if (r < 0)
r = -1 * r;
_putchar('0' + r);
return (r);
}
