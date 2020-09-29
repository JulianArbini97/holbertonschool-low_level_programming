#include "holberton.h"
#include <string.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
  int x, y;
  x = 0;
  y = 0;

  while (str[x] != '\0') /* Con esto va a ir avanzando en el string. El str[x] quiere decir que el string mide x (length) */
    x++;

  if (x % 2 == 0)
    y = x / 2;
  else
    y = (x + 1) / 2;

  for (; y < x; y++)
    {
      _putchar(str[y]);
    }
  _putchar('\n');
}
