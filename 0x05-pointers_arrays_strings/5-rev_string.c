#include "holberton.h"
/**
 * rev_string - check the code for Holberton School students.
 * @s: Puntero
 * Return: Always 0.
 */
void rev_string(char *s)
{
int x = 0;
int y = 0;
char z;
while (s[x] != '\0')
x++;

x -= 1;
while (y < x)
{
z = s[y];
s[y] = s[x];
s[x] = z;
y++;
x--;
}
}
