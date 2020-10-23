#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
  va_list lista;
  int i = 0, n = 0;
  char *sep = "";
