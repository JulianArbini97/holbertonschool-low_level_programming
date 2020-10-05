#include "holberton.h"
#include <stdio.h>

/**
 * _memset - prints buffer in hexa
 * @s: the address of memory to print
 * @b: the size of the memory to print
 * @n: var
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a = 0;
while (a < n)
{
*(s + a) = b;
a++;
}
return (s);
}
