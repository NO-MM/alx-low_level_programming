#include "main.h"
/**
 * _strcmp - The function that compares two strings
 * @s1: A string
 * @s2: A string
 * return: s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
++s1;
++s2;
}
return(*(unsigned char *)s1 - *(unsigned char *)s2);
}
