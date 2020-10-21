#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - check the code for Holberton School students.
 * @name: variable that is going to receive the value of another function.
 * @f: pointer to function.
 */

void print_name(char *name, void (*f)(char *))
{
if (name != 0 && f != 0)
f(name);
}
