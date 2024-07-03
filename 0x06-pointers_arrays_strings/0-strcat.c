#include "main.h"
/**
 * char *_strcat - This function concatenates two strings
 * @dest: The string
 * @src: The string
 * Destription: _strcat concatenates two strings
 * return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
char *p = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (p);
}
