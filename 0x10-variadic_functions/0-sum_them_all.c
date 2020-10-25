#include "variadic_functions.h"

/**
 * sum_them_all - function that sums all the numbers.
 * @n: Variable
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int count = 0;
int sum = 0;

va_start(args, n);
if (n == 0)
return (0);
while (count < n)
{
sum += va_arg(args, int);
count++;
}
va_end(args);
return (sum);
}
