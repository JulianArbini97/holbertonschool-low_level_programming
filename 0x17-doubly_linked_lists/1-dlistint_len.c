#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function that prints all the elements of a dlistint_t list
 * @h: header pointer
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
