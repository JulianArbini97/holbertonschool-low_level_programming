B#include "holberton.h"

/**
 * print_most_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
if ((c >= '0' && c < '2') || c == '3' || c >= '5')
{
_putchar (c);
}
}
_putchar ('\n');
}
