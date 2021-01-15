#include "hash_tables.h"

/**
 * hash_table_create - check the code for Holberton School students.
 * @size: size of table
 * Return: Always EXIT_SUCCESS.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tabla;

	if (size < 1)
		{
		return (NULL);
		}

tabla = malloc(sizeof(hash_table_t));
	if (tabla == NULL)
		{
		return (NULL);
		}

	tabla->array = malloc(size * sizeof(hash_node_t **));
	if (tabla->array == NULL)
		{
		return (NULL);
		}

	tabla->size = size;
	return (tabla);
}
