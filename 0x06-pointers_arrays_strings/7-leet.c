#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *leet - The function that encodes a string into 1337
 * @str: string
 * return: encoded
 */
char *leet(char *str)
{
char *letters = "aeotl";
char *leet_eq = "43071";
int i = 0;
while (str[i] != '\0') i++;
{
int j = 0;
while (letters[j] != '\0') j++;
{
if (str[i] == letters[j] || str[i] == letters[j] - 'a' + 'A')
{
str[i] = leet_eq[j];
}
}
j++;
}
return (str);
}
