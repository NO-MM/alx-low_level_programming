#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - The function that searches a string for
 * any of a set of bytes.
 * @s: A string
 * @accept: A string
 * Return: A pointer to byte in s, ones that matches bytes in accept,
 * or NULL if no such bytes is found.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
{
return (s);
}
a++;
}
s++;
}
return (NULL);
}
