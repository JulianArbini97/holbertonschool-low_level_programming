#include <stdarg.h>
#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
  va_list lista;
  unsigned int i;

  va_start (lista, n);
  
  for (i = 0; i < n; i++)
    {
      printf("%d", va_arg(lista, int));
      if ( i != n - 1)
	{
	  printf ("%s", separator ? separator : "");
    }

  va_end (lista);
    }
  printf ("\n");
}
