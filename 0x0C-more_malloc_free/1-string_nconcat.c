#include "holberton.h"
#include <stdlib.h>

int _strlen(char *s);
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
unsigned int first = 0, second = 0, i = 0, j = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
first = _strlen(s1);
second = _strlen(s2);
if (n > second)
{
n = second;
}
p = malloc(sizeof(char) * (first + n)+1);
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < first; i++)
{
p[i] = s1[i];
}
for (j = 0; j < n; j++)
{
p[i + j] = s2[j];
}
p[i + j] = '\0';
return (p);
}
/**
 * _strlen - check the code for Holberton School students.
 * @s: var
 * Return: Always 0.
 */

int _strlen(char *s)
{
int b = 0;
int total = 0;
while (*(s + b) != '\0')
{
b++;
total++;
}
return (total);
}
