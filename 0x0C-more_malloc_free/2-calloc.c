#include <stdlib.h>
#include "main.h"
/**
 * *_memset - The function that allocates memory for an array, using malloc.
 * @s: The memory area to be filled.
 * @b: A char to copy.
 * @n: The number of times to copy b.
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
/**
 * *_calloc - The funtion that allocates memory for an array.
 * @nmemb: The number of allements in the array.
 * @size: The size of each element.
 *
 * Return: The pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
_memset(ptr, 0, nmemb * size);
return (ptr);
}
