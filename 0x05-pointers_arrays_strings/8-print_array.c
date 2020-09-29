#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
  int i = 0;
  for (i=0; i<n; i++) 
    { 
      printf("%d", a[i]);
      if (i < n - 1)
	{
	  printf(", ");
	}
    }
  printf("\n");
}
