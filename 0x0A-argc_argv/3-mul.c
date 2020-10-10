#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: array of pointers to strings.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int x, y;
if (argc == 3)
{
x = atoi(argv[1]);
y = atoi(argv[2]);
printf("%d\n", x *y);
return (0);
}
else if (argc <= 2)
printf("Error\n");
return (1);
}
