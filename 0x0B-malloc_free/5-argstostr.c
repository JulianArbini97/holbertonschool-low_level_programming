#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
  int i = 0;

  while (*s++)
    i++;

  return (i);
}

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
int i, j, length, total;
int m = 0;
char *p;
if (ac == 0 || av == NULL)
{
return (NULL);
}
total = 0;
for (i = 0; i < ac; i++)
{
length = _strlen(av[i]) + 1;
total += length;
}
p = malloc(sizeof(char) * total + 1);
if (!p)
return (NULL);
for (i = 0; i < ac; i++)
{
length = _strlen(av[i]);
for (j = 0; j < len; j++, m++)
{
p[m] = av[i][j];
}
p[m++] = '\n';
}
p[m] = '\0';
return (p);
}
