#include "main.h"
/**
* char *_strncpy - The function that copies a string
* @dest: A string
* @src: A string
* @n: An int
* return: copy of a string
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; ++i)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
++i;
}
return (dest);
}
