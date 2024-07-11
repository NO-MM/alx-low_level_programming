#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - The function that returns the
 * length of a string.
 * @s: char
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
