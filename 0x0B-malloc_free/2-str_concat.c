#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code for Holberton School students.
 * @s1: punt
 * @s2: Punt
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
char *p;
int a = 0, b = 0, i = 0, j = 0;
if (s1 == NULL)
{
return ('\0');
}
while (s1[a] != 0)
a++;
if (s2 == NULL)
{
return ('\0');
}
while (s2[b] != 0)
b++;
p = (char *) malloc(sizeof(char) * (a + b + 2));
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < a; i++)
{
p[i] = s1[i];
}
for (j = i; j < b + i; j++)
{
p[j] = s2[j - i];
}
p[i + j + 1] = '\0';
return (p);
}
