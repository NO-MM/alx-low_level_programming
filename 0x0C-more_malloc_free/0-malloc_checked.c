#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - The function that allocates memory using malloc.
 * @b: number of bytes allocated
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
