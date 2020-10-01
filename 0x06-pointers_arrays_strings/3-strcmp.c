#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - check the code for Holberton School students.
 * @s1: abc
 * @s2: abc
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] == s2[i] && s1[i] && s2[i])
i++;
return (s1[i] - s2[i]);
}
