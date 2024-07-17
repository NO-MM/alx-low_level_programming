#include "main.h"
#include <stdlib.h>
/**
 * _strdup - The function that duplicate a string.
 *@str: The string
 *
 * Return: The duplicated string
 */
char *_strdup(char *str)
{
int a = 0;
int i = 0;
char *s;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
i++;
s = malloc(sizeof(char) * (i + 1));
if (s == NULL)
return (NULL);
while (a < i)
{
s[a] = str[a];
a++;
}
s[a] = '\0';
return (s);
}
