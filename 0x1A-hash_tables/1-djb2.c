#include "hash_tables.h"

/**
 * hash_djb2 - hashing algorithm for strings
 * @str: string to has usiing djb2 algorithm
 * Return: hashed value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
