#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
  int b = 0;

  while (*(s + b) != 0)
    {
      b++;
    }
  return (b);
}
 