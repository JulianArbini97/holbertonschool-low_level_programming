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
if (*s != '\0')
{
b = b + 1 + _strlen_recursion(s + 1);
}
return (b);
}
