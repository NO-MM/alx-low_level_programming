#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - The function that concatenates two strings.
 * @s1: A string.
 * @s2: A string.
 * @n: number of bytes.
 *
 * Return: If function fail return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
while (s1 && s1[len1])
len1++;
while (s2 && s2[len2])
len2++;
if (n < len2)
n = len2;
s = malloc(sizeof(char) * (len1 + n + 1));
if (!s)
return (NULL);
while (i < len1)
{
s[i] = s1[i];
i++;
}
while (j < n)
s[i++] = s2[j++];
s[i] = '\0';
return (s);
}
