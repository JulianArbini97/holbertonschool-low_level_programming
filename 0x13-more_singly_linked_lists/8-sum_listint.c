#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list
 *@head: head
 *Return: nth node
 */
int sum_listint(listint_t *head)
{

  listint_t *current;
  int sum = 0;

  for (current = head; current !=NULL; current = current->next)
    {
      sum = sum + current->n;
    }
  return (sum);
}
