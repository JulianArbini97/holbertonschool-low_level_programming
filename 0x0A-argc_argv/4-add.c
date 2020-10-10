#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <ctype.h>
/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: array of pointers to strings.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int x, y, sum = 0;
for (x = 1; x < argc; x++)
{
for (y = 0; *(argv[x] + y) != '\0'; y++)
{
if (*(argv[x] + y) < '0' || *(argv[x] + y) > '9')
{
printf("Error\n");
return (0);
}
}
sum += atoi(argv[x]);
}
printf("%d\n", sum);
return (0);
}
