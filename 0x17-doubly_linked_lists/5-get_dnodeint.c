#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: input header pointer
 * @n: Input int value
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *temporal;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		temporal = *head;
		while (temporal-> next != NULL)
		{
			temporal = temporal->next;
		}
	}
	return (temporal);
}
