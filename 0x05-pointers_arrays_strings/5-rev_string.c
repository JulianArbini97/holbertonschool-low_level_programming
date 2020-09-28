#include "holberton.h"
#include <string.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
  int x = strlen(s) - 1;
  int y = 0;
  char z;
  while (y < x)
    {
      z = s[y];
      s[y] = s[x];
      s[x] = z;
      y++;
      x--;
    }
}
