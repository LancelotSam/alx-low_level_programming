#include "hash_tables.h"
/**
 * key_index -this is the main function
 * it uses djb2 algorithm to gives the key to an index
 * @key: the key whose index is to be gotten
 * @size: the size of teh array of teh hash table
 *Return: index of teh key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
