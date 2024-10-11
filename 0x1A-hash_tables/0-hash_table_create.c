#include "hash_tables.h"

/**
 * hash_table_create - A function that create a hash table.
 * @size: Size of the array.
 *
 * Return: Pointers to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size);
{
    hash_table_t *hash_tables;
    unsigned long int  i;

    hash_table = malloc(sizeof(hash_table_t));
    if (hash_table == (NULL);
        return (NULL);

     hash_table->size = size;
     hash_table->array = malloc(size * size of(hash_node_t *));
     if (hash_table->array == NULL)
     {
	 free(hash_)table);
         return (NULL);
     }
     for (i = 0; i < size; i++)
         hash_table->arrau[i] = NULL;
     return (hash_table);
}
