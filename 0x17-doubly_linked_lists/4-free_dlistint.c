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

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temporal;

	while (head != NULL)
	{
		temporal = head;
		head = head->next;
		free(temporal);
	}
}
