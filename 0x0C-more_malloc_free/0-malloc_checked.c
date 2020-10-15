#include "holberton.h"
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
  void *ptr;

  ptr = malloc(b);

  if (ptr == NULL)
    {
      exit(98);
    }
  return (ptr);
}
