#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
  unsigned int a = 0, c, b = 0;

  while ((*s + a))
    {
      for (c = 0; *(accept + c); c++)
	{
	  if (*(s + a) == *(accept + c))
	    {
	      b++;
	    }
	}
      if (b < a)
	{
	  break;
	}
      a++;
    }
  return (b);
}
