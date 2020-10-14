#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
  char *p;
  int i, j, total;

  if (ac == 0 || av == NULL)
    {
      return (NULL);
    }

  p = malloc(sizeof(char) * ac);
  for (i = 0; i < ac; i++)
    {
      for (j = 0; av[j] != 0; j++)
	{
	}
	  total += j + 1;
    }
      p = malloc(sizeof(char) * total);
      for (j = 0; av[j] != 0; j++)
	{
	  p += av[i][j];
	  p += '\n';
	}
      return (p);
    }
