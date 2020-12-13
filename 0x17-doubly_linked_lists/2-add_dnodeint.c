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

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new_head;

	new_head = malloc(sizeof(dlistint_t));
	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->prev = NULL;

	if (*head == NULL)
	{
		new_head->next = NULL;
		*head = new_head;
	}
	else
	{
		new_head->next = *head;
		(*head)->prev = new_head;
		*head = new_head;
	}
	return (new_head);
}
