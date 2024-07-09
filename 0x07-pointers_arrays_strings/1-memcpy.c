#include "main.h"
#include <stddef.h>
/**
 * _memcpy - The function that copies memory area.
 * @dest: memory area
 * @src: memory area
 * @n: byte
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *ptr_dest = dest;
char *ptr_src = src;
while (n-- > 0)
{
*ptr_dest++ = *ptr_src++;
}
return (dest);
}
