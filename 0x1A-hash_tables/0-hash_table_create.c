#include "hash_tables.h"
/**
 * hash_table_create - This function creates a new hash table
 * @size: size of the hash table
 * Return:  a new hash table
*/


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));
	unsigned long int i;
	/* Initialize a hash table*/

	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->size = size;

	/* dynamically allocate memory for the array of linked list*/
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}


	i = 0;

	while (i < size)
	{
		hash_table->array[i] = NULL; /* set each element in the array to NULL*/
		i++;
	}

	return (hash_table);
}
