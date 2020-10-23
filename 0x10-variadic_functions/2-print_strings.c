#include <stdarg.h>
#include "variadic_functions.h"



void print_strings(const char *separator, const unsigned int n, ...)
{
  va_list lista;
  unsigned int i = 0;
  char *s;
  if (separator == NULL)
    separator = "";

  va_start (lista, n);
       while ( i < n - 1)
	{
	  s = va_arg(lista, char *); 
     if (s != NULL)
	{	 
	  printf("%s%s", s, separator);
	}
      else
	printf ("(nil)%s", separator);
      i++;  
  }
       s = va_arg(lista, char *);
       if (s != NULL)
	 {
	   printf("%s\n", s);
	 }
       else
	 printf ("(nil)\n");
	  va_end (lista);
     }
