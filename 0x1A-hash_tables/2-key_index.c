#include "hash_tables.h"

/**
 * key_index - A function that gives the index of a key.
 * @key: A key to get index.
 * @size: A size of the hash table.
 *
 * Return: index for the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
