#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: pointer to struct hash_table_t
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	unsigned long int last = 0;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		temp = ht->array[i];
		if (temp != NULL)
		{
			last = i;
			temp = temp->next;
		}
		i++;
	}

	putchar('{');
	i = 0;
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			if (i != last)
				printf(", ");
			temp = temp->next;
		}
		i++;
	}
	printf("}\n");
}
