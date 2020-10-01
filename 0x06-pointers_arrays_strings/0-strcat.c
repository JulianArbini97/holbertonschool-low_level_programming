#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
  int n, temp;

  n = 0;
  while (dest[n] != '\0') {
    ++n;
  }

  for (temp = 0; src[temp] != '\0'; ++temp, ++n) {
    dest[n] = src[temp];
  }

  dest[n] = '\0';

  return (dest);

}
