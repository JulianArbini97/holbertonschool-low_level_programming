#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end - function that adds a new node at the end of a list_t list
 * @head: input header pointer
 * @n: Input string value
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *last_node;
listint_t *tmp;

last_node = malloc(sizeof(listint_t));
if (last_node == NULL)
{
return (NULL);
}
last_node->n = n;
last_node->next = NULL;
if (*head == NULL)
{
*head = last_node;
}
else
{
tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = last_node;
}
return (last_node);
}
