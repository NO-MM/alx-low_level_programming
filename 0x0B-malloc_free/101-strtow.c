#include "main.h"
#include <stdlib.h>
int count_word(char *s);
char **strtow(char *str);
/**
 * count_word - Count the number of words contained within a string.
 * @s: A string
 *
 * Return: The number of words contained within a string.
 */
int count_word(char *s)
{
int i = 0, l = 0, w = 0;
for (l = 0; s[l] != '\0'; l++)
{
if (s[l] == ' ')
i = 0;
else if (i == 0)
{
i = 1;
w++;
}
}
return (w);
}
/**
 * strtow - Split a string into words.
 * @str: A string
 *
 * Return: If function fail return NULL.
 */
char **strtow(char *str)
{
char **strings, *tmp;
int i = 0, words, w = 0, j, l = 0, start = 0, end;
while (*(str + i))
i++;
words = count_word(str);
if (words == 0)
return (NULL);
strings = (char **)malloc(sizeof(char *) * (words + 1));
if (strings == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (l)
{
end = i;
tmp = (char *)malloc(sizeof(char) * (l + 1));
if (tmp == NULL)
{
return (NULL);
}
for (j = 0; start < end; j++)
{
tmp[j] = str[start++];
}
tmp[j] = '\0';
strings[w] = tmp;
w++;
l = 0;
}
}
else if (l++ == 0)
start = i;
}
strings[w] = NULL;
return (strings);
}
