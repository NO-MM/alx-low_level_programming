#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * _strchr - The function that locates a character in a string.
 * @s: A string
 * @c: The character to locate
 *
 * Return: Pointer to th first occurrent of 'c' in 's' or
 * Null if character is not found.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}
