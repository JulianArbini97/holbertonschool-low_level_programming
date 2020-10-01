#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - check the code for Holberton School students.
 * @dest: abc
 * @src: abc
 * @n: abc
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i])
{
dest[i] = src[i];
i++;
}
while (i < n)
dest[i++] = '\0';
return (dest);
}
