#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - function that prints all the elements of a dlistint_t list
 * @head: header pointer
 * Return: number of nodes
 */

int sum_dlistint(dlistint_t *head)
{

	unsigned int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	  {
	    sum = sum + head->n;
	    head = head->next;
	  }
	return (sum);
}
