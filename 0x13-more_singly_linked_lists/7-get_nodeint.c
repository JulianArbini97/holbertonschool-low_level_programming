#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * get_nodeint_at_index - function
 * @head: input header pointer
 * @index: Input string value
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
listint_t *current;

while (current != NULL)
{
if (count == index)
{
return (current);
}
count++;
current = current->next;
}
return (NULL);
}
