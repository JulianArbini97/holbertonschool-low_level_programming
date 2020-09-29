#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - check the code for Holberton School students.
 * @dest: char pointer to be determined.
 * @src: char pointer to be determined.
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int a = 0;
int b;

while (src[a] != '\0')
a++;
for (b = 0; b <= a; b++)
{
dest[b] = src[b];
}
return (dest);
}
