#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - prints buffer in hexa
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n: var
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a = 0;
while (a < n)
{
*(dest + a) = *(src + a);
a++;
}
return (dest);
}
