#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
  int q = *a;
  int w = *b;

  q = 98;
  w = 42;

  *a = w;
  *b = q;
}
