#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check the code for Holberton School students.
 * @str: punt
 * Return: Always 0.
 */
char *_strdup(char *str)
{
int a = 0, b = 0;
char *s;

if (str == NULL)
{
return (NULL);
}
while (str[a] != 0)
{
a++;
}
if (a == 0)
{
return (NULL);
}
s = (char *)malloc(sizeof(char) * a);
for (b = 0; b < a; b++)
{
s[b] = str[b];
}
return (s);
}
