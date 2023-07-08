#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: array index key
 * @value:  The value for the pair
 * Return: 1 if successful. 0 for otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* check if key or hash table is empty*/
	if (key == NULL || ht == NULL)
	{
		return (0);
	}
	hash_table_t *temp = ht;
	/*get index value*/
	unsigned long int key_value = key_index(key, temp->size);
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = strdup(key);
	/* Allocate memory for the string to create another copy*/
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	/*check if bucket is empty*/
	if (temp->array[key_value] == NULL)
	{
		temp->array[key_value] = new_node;
		return (1);
	}
	/*check for collision*/
	else
	{
		new_node->next = temp->array[key_value];
		temp->array[key_value] = new_node;
		return (1);
	}
}
