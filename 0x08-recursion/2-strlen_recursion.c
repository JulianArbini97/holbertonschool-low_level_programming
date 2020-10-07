#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - check the code for Holberton School students.
 * @s: Var
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
int b = 0;
while (*(s + b) != 0)
{
b++;
}
return (b);
}
