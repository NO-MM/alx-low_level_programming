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
int ch = 0, i = 0, j = 0, k = 0;
char *s;
if (ac == 0 || av == NULL)
return (NULL);
while (i < ac)
{
while (av[i][j])
{
ch++;
j++;
}
j = 0;
i++;
}
s = malloc(sizeof(char) * (ch + ac + 1));
if (s == NULL)
return (NULL);
for (i = 0; i < ac; i++)
j = 0;
{
while (av[i][j] != '\0');
}
s[k] = av[i][j];
k++;
j++;
{
s[k] = '\0';
j = 0;
k++;
i++;
}
k++;
}
s[k] = '\0';
return (s);
}
