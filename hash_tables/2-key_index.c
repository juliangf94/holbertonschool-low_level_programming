#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in the hash table array.
 * @key: The key (string) to get the index for.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key/value pair should be stored.
 *
 * Description: This function uses the hash_djb2 algorithm to generate
 * a hash value, and then uses the modulo operation (hash % size) to
 * ensure the index is within the valid range [0, size - 1].
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/*Calculate the hash value using the djb2 algorithm*/
	unsigned long int hash_value = hash_djb2(key);
	/*Map the hash value to an indez within the array size*/
	return (hash_value % size);
}
