#include "holberton.h"
#include <string.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
  int i = 0;
  int j = strlen(str);

  for (i = 0; i < j; i+=2)
    {
      _putchar(str[i]);
    }
  _putchar (10);
}
