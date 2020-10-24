#include <stdarg.h>
#include "variadic_functions.h"



void print_strings(const char *separator, const unsigned int n, ...)
{
  unsigned int i;
  va_list arg;
  char *test;

  va_start(arg, n);

  for (i = 0; i < n; i++)
    {
      test = va_arg(arg, char*);
      if (test)
	{
	  printf("%s", test);
	}
      else
	printf("(nil)");
      if (separator != NULL && (i < (n - 1)))
	printf("%s", separator);
    }
  va_end(arg);
  printf("\n");
}
