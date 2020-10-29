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

list_t *add_node_end(list_t **head, const char *str)
{
list_t *last_node;
list_t *tmp;

last_node = malloc(sizeof(list_t));
if (last_node == NULL)
{
return (NULL);
}
last_node->len = _strlen(str);
last_node->str = strdup(str);
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

/**
 * _strlen - returns length of string
 * @s: character of string
 * Return: length of string
 */

int _strlen(const char *s)
{
int i;

while (s[i] != 0)
i++;
return (i);
}
