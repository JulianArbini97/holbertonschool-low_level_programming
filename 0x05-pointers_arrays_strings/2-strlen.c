#include "holberton.h"
#include <string.h>
/**
 * _strlen - check the code for Holberton School students.
 * @s: Puntero
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
