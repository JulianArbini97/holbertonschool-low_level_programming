#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - add a new node at the beginning of a dlistint_t list
 * @head: input header pointer
 * @index: Input int value
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *refer_node;
	unsigned int counter = 0;

	refer_node = head;
	while (refer_node != NULL && counter <= index)
	{
		if (counter == index)
		{
			return (refer_node);
		}
		refer_node = refer_node->next;
		counter++;
	}
	return (refer_node);
}
