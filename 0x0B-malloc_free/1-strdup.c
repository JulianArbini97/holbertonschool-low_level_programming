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

if (str == 0)
{
return (NULL);
}
while (str[a] != 0)
{
a++;
}
s = (char *)malloc(sizeof(char) * a + 1);
if (s == NULL)
{
return (NULL);
}
for (b = 0; b < a; b++)
{
s[b] = str[b];
}
return (s);
}
