#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int print_last_digit(int r)
{
  int m = (r % 10);
  if(r < 0)
    {
      return ((-m));
    }
  else 
    {
      return (m);
    }
 }
