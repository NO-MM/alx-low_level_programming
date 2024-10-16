#include "hash_tables.h"
/**
 * hash_table_delete - A function that delete a hash table.
 * @ht: A hash table to delete.
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *next;

if (ht == NULL || ht->array == NULL || ht->size == 0)
return;
for (i = 0; i < ht->size; i++)
{
while (ht->array[i] != NULL)
{
next = ht->array[i]->next;
free(ht->array[i]->key);
free(ht->array[i]->value);
ht->array[i] = next;
}
}

free(ht->array);
ht->array = NULL;
ht->size = 0;
free(ht);
}
