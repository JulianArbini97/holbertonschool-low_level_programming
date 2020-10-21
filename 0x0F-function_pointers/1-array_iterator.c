#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - check the code for Holberton School students.
 * @array: Array that is going to receive all the values.
 * @size: Size.
 * @action: Pointer to another function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if (size <= 0 || array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
