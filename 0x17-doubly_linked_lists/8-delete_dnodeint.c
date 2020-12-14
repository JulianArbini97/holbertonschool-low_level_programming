#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: first node of linked list
 * @index: node that should be deleted
 * Return: 1 if success, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

  dlistint_t *temporal;
  unsigned int counter = 0;

  if (*head == NULL)
    {
      return (-1);
    }

  temporal = *head;
 
  while (counter < index && temporal != NULL)
    {
	  temporal = temporal->next;
	  counter++;
    }

  if (temporal == NULL)
    {
      return (-1);
    }

  if (counter == index)
    {
      if ((*head)->next == NULL)
	{
	  *head = NULL;
	  free(temporal);
	  return (1);
	}
      if (temporal == (*head))
	{
	  (*head) = (*head)->next;
	  (*head)->prev = NULL;
	  free(temporal);
	  return (1);
	}
      if (temporal->next == NULL)
	{
	  temporal->prev->next = NULL;
	  free(temporal);
	  return (1);
	}
      temporal->next->prev = temporal->prev;
      temporal->prev->next = temporal->next;
      free(temporal);
      return(1);
    }
  return (-1);
 }
