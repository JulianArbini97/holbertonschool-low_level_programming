#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
int count;
long int a = 0, b = 1, c;
for (count = 0; count < 50; count++)
{
c = a + b;
printf("%ld", c);
a = b;
b = c;
if (count != 49)
printf(", ");
}
printf("\n");
return (0);
}
