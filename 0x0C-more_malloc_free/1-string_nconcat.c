BB#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - check the code for Holberton School students.
 * @s1: var
 * @s2: var
 * @n: var
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int a = 0, b = 0, i = 0, j = 0;
if (s1 == NULL)
{
s1 = "";
}
while (s1[a] != 0)
a++;
if (s2 == NULL)
{
s2 = "";
}
while (s2[b] != 0)
b++;
if (n >= b)
{
n = b;
}
p = (char *) malloc(sizeof(char) * (a + n)+1);
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < a; i++)
{
p[i] = s1[i];
}
for (j = i; j < n + i; j++)
{
p[j] = s2[j - i];
}
p[i + j + 1] = '\0';
return (p);
}
