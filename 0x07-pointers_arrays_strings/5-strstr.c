#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
  {
    int a = 0;
    while (*haystack != 0)
      {
	if (*haystack == *needle)
	  {
	    a = 1;
	    break;
	  }
	haystack++;
      }
    if (a != 0)
      return (haystack);
    else
      return (0);
  }
