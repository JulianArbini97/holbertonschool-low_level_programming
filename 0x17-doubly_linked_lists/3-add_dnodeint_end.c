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

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_end;
	dlistint_t *temporal;

	new_end = malloc(sizeof(dlistint_t));
	if (new_end == NULL)
		return (NULL);
	new_end->n = n;
	new_end->next = NULL;
	if (*head == NULL)
	{
		new_end->prev = NULL;
		*head = new_end;
	}
	else
	{
		temporal = *head;
		while (temporal-> next != NULL)
		{
			temporal = temporal->next;
		}
		temporal->next = new_end;
		new_end->prev = temporal;
	}
	return (new_end);
}
