#include "main.h"
#include <unistd.h>
/**
 * _memset - The function that fills memory with a constant byte.
 * @s: byte
 * @b: byte
 * @n: byte
 * Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;
while (n-- > 0)
{
*ptr++ = b;
}
return (s);
}
