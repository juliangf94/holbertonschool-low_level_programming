#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;
	/*Initial hash value*/
	hash = 5381;
	/*Loop through the string until reaching the null terminator*/
	/*Assign the current character to c and increments str*/
	while ((c = *str++))
	{
		/**/
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
