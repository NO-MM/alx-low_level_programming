#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - Concatenates all the arguments
 * @ac: The argument counter
 * @av: The argument vector
 *
 * Return: NULL if ac is 0 or av is NULL.
 */
char *argstostr(int ac, char **av)
{
int i, c, j = 0, k = 0;
char *s;
if (ac == 0 || av == NULL)
return (NULL);
for (i =0; i < ac; i++)
{
for (c = 0; av [i][c]; c++)
k++;
}
k += ac;
s = malloc(sizeof(char) * k + 1);
if (s == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (c = 0; av[i][c]; c++)
{
s[j] = av[i][c];
j++;
}
if (s[j] == '\0')
{
s[j++] = '\n';
}
}
return (s);
}
