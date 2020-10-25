#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that sums all the numbers.
 * @n: Variable
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list lista;
unsigned int i = 0;
int sum = 0;

va_start(lista, n);
if (n == 0)
{
return (0);
}

while (i < n)
{
sum += va_arg(lista, int);
i++;
}
va_end(lista);
return (sum);
}
