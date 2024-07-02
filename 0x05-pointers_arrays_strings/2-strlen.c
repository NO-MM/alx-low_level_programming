#include <stdio.h>
/**
 * _strlen - This function returnns the lenght of a string
 *@s: The string
 *return: The length of @str
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
