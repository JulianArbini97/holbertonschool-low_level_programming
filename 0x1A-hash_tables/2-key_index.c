#include "hash_tables.h"

/**
 * key_index - implementation of the djb2 algorithm
 * @key: key
 * @size: size of ht
 * Return: hash value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	  unsigned long int result;

	result = hash_djb2(key);
	return (result % size);
}
