#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
  int r;

  r = n % 10;

  if (r < 0)
    r = -1 * r;
  _putchar('0' + r);
  return (r);
 }
