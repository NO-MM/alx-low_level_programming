#include "main.h"
/**
 * *_strcat - This function concatenates two strings
 * @dest: The string
 * @src: The string
 * Destription: _strcat concatenates two strings
 * return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
char *p = dest;
while (*p != '\0')
{
p++;
}
while (*src != '\0')
{
*p = *src;
p++;
src++;
}
*p  = '\0';
return (dest);
}
