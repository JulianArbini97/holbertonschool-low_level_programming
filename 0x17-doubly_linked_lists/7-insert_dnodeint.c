#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a node at the beginning of a dlistint_t list
 * @h: input header pointer
 * @idx:  index of the list where the new node should be added
 * @n: value of the node
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temporal = *h, *tempcount = *h, *temporal2;
	dlistint_t *new_node;
	unsigned int counter = 0;

	if (*h == NULL)
		return (NULL);
	while (tempcount != NULL)
		tempcount = tempcount->next, counter++;
	if (idx > counter)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL, new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	for (counter = 0; counter < idx; counter++)
		temporal2 = temporal, temporal = temporal->next;
	new_node->next = temporal;
	new_node->prev = temporal2;
	temporal2->next = new_node;
	if (temporal)
		temporal->prev = new_node;
	return (new_node);
}
