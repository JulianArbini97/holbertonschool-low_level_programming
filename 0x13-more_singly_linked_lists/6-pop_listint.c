#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * pop_listint - function that adds a new node at the end of a list_t list
 * @head: input header pointer
 * Return: the address of the new element, or NULL if it failed
 */

int pop_listint(listint_t **head)
{

listint_t *tmp;
int data;

if (*head == NULL)
return (0);

tmp = *head;
*head = (*head)->next;
data = tmp->n;
free(tmp);
return (data);
}
