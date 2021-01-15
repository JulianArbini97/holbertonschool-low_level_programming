#include "hash_tables.h"

/**
 * hash_table_get - function that adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key input
 * Return: 1 if it succeeded, 0 otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *tmp;

if (ht == NULL || key == NULL || strlen(key) == 0)
{
return (NULL);
}
index = key_index((unsigned char *)key, ht->size);
if (ht->array[index] != NULL)
{
for (tmp = ht->array[index]; tmp; tmp = tmp->next)
{
if (strcmp(tmp->key, key) == 0)
return (tmp->value);
}
}
return (NULL);
}
