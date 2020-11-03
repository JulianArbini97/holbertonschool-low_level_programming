#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked
 * list_t list
 * @h: header pointer
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
  size_t a = 0;

  while (h != NULL)
    {
      h = h->next;
      a++;
    }
  return (a);
}
