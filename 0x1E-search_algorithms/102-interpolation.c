#include "search_algos.h"

/**
* interpolation_search - get THE number
* @array: arrayay to work with
* @size: Size of the arrayay
* @value: Value to search
* Return: 0 or -1
*/

int interpolation_search(int *array, size_t size, int value)
{
size_t low = 0;
size_t high = size - 1;
size_t mid = 0;

if (array == NULL)
return (-1);

while ((array[high] != array[low]) && (value >= array[low])
&& (value <= array[high]))
{
mid = low + (((double)(high - low) /
(array[high] - array[low])) * (value - array[low]));
printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
if (array[mid] == value)
return (mid);
else if (array[mid] > value)
high = mid - 1;
else
low = mid + 1;
}
mid = low + (((double)(high - low) /
(array[high] - array[low])) * (value - array[low]));
printf("Value checked array[%li] is out of range\n", mid);
return (-1);
}
