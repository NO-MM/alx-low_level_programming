#include "main.h"
#include <stdio.h>
/**
 * _strstr - The function that locates a substing.
 * @haystack: A string
 * @needle: A substrin
 *
 * Return: pointer to the beginning of the located substring,
 * NULL if substing is not found.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *hay = haystack;
char *nee = needle;
while (*nee != '\0' && *hay == *nee)
{
hay++;
nee++;
}
if (*nee == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}

