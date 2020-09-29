#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
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
