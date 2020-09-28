#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
  int p = *n;
  p = 98;
  *n = p;
}
