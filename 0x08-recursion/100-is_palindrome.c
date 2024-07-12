#include "main.h"
#include <stdio.h>
int is_palindrome(char *s);
int comparator(char *s, int s1, int b1);
int _strlen_recursion(char *s);
/**
 * _strlen_recursion - Function that returns length
 * of a string.
 * @s: string
 *
 * Return: length of a string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
/**
 * comparator - The function that compares
 * a character of the string.
 * @s: string
 * @s1: smallest iterator.
 * @b1: biggest iterator.
 *
 * Return: The string that is palindrome.
 */
int comparator(char *s, int s1, int b1)
{
if (s1 >= b1)
{
return (1);
}
if (*(s + s1) != *(s + b1))
{
return (0);
}
return (comparator(s, s1 + 1, b1 - 1));
}
/**
 * is_palindrome - The function that detect if
 * a string is a palindrome.
 * @s: string
 *
 * Return: 1 if a string is palindrome otherwise 0.
 */
int is_palindrome(char *s)
{
int length = _strlen_recursion(s);
if (*s == '\0')
{
return (1);
}
return (comparator(s, 0, length - 1));
}
