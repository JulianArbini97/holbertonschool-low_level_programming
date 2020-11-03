#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: input header pointer
 * @str: Input string value
 * Return: the address of the new element, or NULL if it failed
 */

int pop_listint(listint_t **head)
{

  listint_t *tmp;
  int data = *head;

  if (*head == NULL)
    return (NULL);

  data = tmp->n; 
  *head = (*head)->next;
  free(tmp);
  return (data);
}
