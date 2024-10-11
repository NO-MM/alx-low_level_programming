#include "hash_tables.h"

/**
 * hash_table_create - A function that create a hash table.
 * @size: Size of the array.
 *
 * Return: Pointers to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_tables;
    unsigned long int  i;

    hash_tables = malloc(sizeof(hash_table_t));
    if (hash_tables == NULL)
        return (NULL);

     hash_tables->size = size;
     hash_tables->array = malloc(size * sizeof(hash_node_t *));
     if (hash_tables->array == NULL)
     {
	 free(hash_tables);
         return (NULL);
     }
     for (i = 0; i < size; i++)
         hash_tables->array[i] = NULL;
     return (hash_tables);
}
