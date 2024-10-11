#include "hash_tables.h"

/**
 * hash_djb2 - A function that implement algorthm of the djb2.
 * @str: A string used to generate hash value.
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while (( = *str++))
    {
        hash = ((hash << 5) + hash) + c;
    }
    return (hash);
}
