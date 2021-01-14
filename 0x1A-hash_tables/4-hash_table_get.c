#include "hash_tables.h"

/**
 * hash_table_get - function that adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key input
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int size, index;
    hash_node_t *tmp;

    if (ht == NULL)
    {
        return (NULL);
    }
    size = ht->size;
    index = key_index((const unsigned char *)key, size);
    tmp = ht->array[index];
    if (tmp != NULL)
    {
        while (strcmp(tmp->key, strdup(key)) != 0 || tmp == NULL)
	    {
            tmp = tmp->next;
        }
        if (tmp == NULL)
        {
            return (NULL);
        }
        else
        {
            return(tmp->value);
        }
    }
    else
    {
        return (NULL);
    }
}