#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_square(int size)
{
  int a, b;

  if (size <= 0)
    _putchar('\n');

  for (a = 0; a <= size; a++)
    {
      for (b = 0; b < size; b++)
	{
	  if (a == b)
	    {
	      _putchar('\n');
	    }
	  else
	    {
	      _putchar('#');
	    }
	}
    }
}
