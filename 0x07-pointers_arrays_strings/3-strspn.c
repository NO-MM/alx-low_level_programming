#include "main.h"
#include <unistd.h>
/**
 * _strspn - The functio that gets the lenght of a prefix substring.
 * @s: A string
 * @accept: byte
 *
 * Return: Number of byte in the initial segment of s,
 * with only bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int length = 0;
char *a;
while (*s != '\0')
{
int f = 0;
for (a = accept; *a != '\0'; a++)
{
if (*s == *a)
{
f = 1;
break;
}
}
if (!f)
{
break;
}
else
{
length++;
s++;
}
}
return (length);
}
