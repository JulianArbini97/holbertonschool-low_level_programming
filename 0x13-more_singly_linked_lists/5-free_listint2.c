#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a list_t
 * @head: header pointer
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
listint_t *tmp = NULL;

if (head == NULL)
return;
while (*head != NULL)
{
new = *head;
*head = (**head).next;
free(new);
}
head = NULL;
}
