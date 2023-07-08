#include "hash_tables.h"

/**
 * key_index - This function gives the index of a key based
 * on the size of the hash_map
 *
 * @key: key string used to generate hash value
 * @size: size of the hash_table
 * Return: The key at index
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);

	/*returns the index of a key*/
}
