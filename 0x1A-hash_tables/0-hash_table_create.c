#include "hash_tables.h"
/**
 * hash_table_create - write a function creates a hash table
 * @size: size the hash table
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int go;
	hash_table_t *hash;

	hash = malloc(sizeof(hash_table_t));

	if (hash == NULL)
		return (NULL)

	hash->size = size;
	hash->array = malloc(sizeof(hash_table_t *) * size);

	if (hash->array == NULL)
	{
		free(hash);
		return (NULL);
	}

	for (go = 0; go < size; go++)
		hash->array[go] = NULL;

	return (hash);
}
