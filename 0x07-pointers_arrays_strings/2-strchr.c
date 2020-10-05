#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - check the code for Holberton School students.
 * @s: pointer
 * @c: var
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
int a;
a = 0;
while (s[a] != '\0')
{
if (s[a] == c)
break;
a++;
}
if (s[a] == c)
return (&s[a]);
return (0);
}
