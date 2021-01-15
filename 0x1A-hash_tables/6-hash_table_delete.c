#include "hash_tables.h"

/**
 * hash_table_delete - check the code for Holberton School students.
 * @ht: table
 * Return: Always EXIT_SUCCESS.
 */

void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *tmp, *freeable;

if (!ht)
return;

for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
for (tmp = ht->array[i]; tmp;)
{
freeable = tmp;
tmp = tmp->next;
free(freeable->key);
free(freeable->value);
free(freeable);
freeable = NULL;
}
}
}
free(ht->array);
free(ht);
ht = NULL;
}
