#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
  char *p;
  int a = 0, b = 0, i = 0, j = 0;

  while (s1[a] != 0)
    a++;
  while (s2[b] != 0)
    b++;

  p = (char*)malloc(sizeof(char) * (a + b));

  for (i = 0; i < a; i++)
    {
      p[i] = s1[i];
    }

  for (j = i; j < b + i; j++)
    {
      p[j] = s2[j - i];
    }
  return (p);
}
