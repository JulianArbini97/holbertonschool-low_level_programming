#include "search_algos.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * linear_search to get THE number
 * @array: Array to work with
 * @size: Size of the array
 * @value: Value to search
 * Return: 0 or -1
 */

int linear_search(int *array, size_t size, int value)
{
    int i = 0;

    if (array == NULL)
    {
        return (-1);
    }

    for (i = 0; i < (int)size; i++)
    {
        if (array[i] == value)
        {
            printf("Value checked array[%d] = [%d]\n", i, array[i]);
            break;
        }
        else
        {
            printf("Value checked array[%d] = [%d]\n", i, array[i]);
        }
    }

    if (i > (int)size)
    {
        return (-1);
    }
    return(i);
}
