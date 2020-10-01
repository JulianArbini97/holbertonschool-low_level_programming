#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - check the code for Holberton School students.
 * @dest: abc
 * @src: abc
 * @n: abc
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int lenght;

for (lenght = 0; dest[lenght]; lenght++)
{
}
for (i = 0; src[i]; i++)
{
}
for (i = 0 ; i < n && src[i] != '\0' ; i++)
dest[lenght + i] = src[i];
dest[lenght + i] = '\0';
return (dest);
}
