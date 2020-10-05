#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - check the code for Holberton School students.
 * @s: punt
 * @accept: punt
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int a = 0, c, b = 0;
while ((*s + a))
{
for (c = 0; *(accept + c); c++)
{
if (*(s + a) == *(accept + c))
{
b++;
}
}
if (b < a)
{
break;
}
a++;
}
return (b);
}
