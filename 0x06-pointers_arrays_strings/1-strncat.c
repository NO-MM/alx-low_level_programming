#include "main.h"
/**
 * char *_strncat - The function that concatenates two strings
 * @dest: The string
 * @src: The string
 * @n: byte
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *p = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return (p);
}
