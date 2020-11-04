#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_nodeint - function that prints all the elements of a list_t list
 * @head: input header pointer
 * @n: Input string value
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_first;

new_first = malloc(sizeof(listint_t));
if (new_first == NULL)
{
return (NULL);
}
else
{
new_first->n = n;
new_first->next = *head;
*head = new_first;
return (new_first);
}
}
