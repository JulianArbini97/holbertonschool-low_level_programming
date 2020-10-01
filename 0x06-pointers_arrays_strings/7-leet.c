#include "holberton.h"
#include <stdio.h>

/**
 * leet - check the code for Holberton School students.
 * @a: var
 * Return: Always 0.
 */
char *leet(char *a)
{
int i = 0, j = 0;
char letras[] = "aAeEoOtTlL";
char num[] = "4433007711";
while (*(a + i) != 0)
{
for (j = 0; j <= 9; j++)
{
if (*(a + i) == letras[j])
{
*(a + i) = num[j];
break;
}
}
i++;
}
return (a);
}
