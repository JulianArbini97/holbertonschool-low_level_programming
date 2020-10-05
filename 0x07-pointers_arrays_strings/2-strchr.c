B#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - check the code for Holberton School students.
 * @s: pointer
 * @c: var
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
int a = 0;
while (*s != 0)
{
if (*s == c)
{
a = 1;
break;
}
s++;
}
if (a != 0)
return (s);
else
return (0);
}
