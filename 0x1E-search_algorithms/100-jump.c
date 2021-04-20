#include "search_algos.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>

/**
 * linear_search to get THE number
 * @array: Array to work with
 * @size: Size of the array
 * @value: Value to search
 * Return: 0 or -1
 */

int jump_search(int *array, size_t size, int value)
{
	unsigned int jump_step, prev = 0;

    if (array == NULL)
		return -1;

   jump_step = sqrt(size);
	while (array[prev] <= value)
	{
		printf("Value checked array[%i] = [%i]\n", prev, array[prev]);
		if (array[jump_step] >= value || jump_step >= size)
		{
			break;
		}
		else
		{
			prev = jump_step;
			jump_step = jump_step + sqrt(size);
		}
	}
   printf("Value found between indexes [%i] and [%i]\n", prev, jump_step);
	while(array[prev] < value && prev < size)
	{
		printf("Value checked array[%i] = [%i]\n", prev, array[prev]);
		prev++;
	}
	if(array[prev] == value)
	{
		printf("Value checked array[%i] = [%i]\n", prev, array[prev]);
		return prev;
	}
	else
	{
		return -1;
	}
}