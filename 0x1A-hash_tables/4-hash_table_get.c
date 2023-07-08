#include "hash_tables.h"

/**
 * hash_table_get - This function retrieves a value associated
 * with a key
 * @ht: pointer to the hash table
 * @key: string to convert to code number
 * Return: returns the value for the key
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    /* create a temp hash_table */
	const hash_table_t *temp = ht;

    /* generate key value */
	unsigned long int keys = key_index(key, temp->size);

    /* find the value with the generated key */
	hash_node_t *current = temp->array[keys];

	while (current != NULL)
	{
		/* check for matching key value and return the value */
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}

		current = current->next;
	}

	if (current == NULL)
	{
		return (NULL);
	}

	return (current->value);
}
