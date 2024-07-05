#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * leet - Encodes a string into 1337 speak.
 * @str: string to encode.
 *
 * return: Pointer to the encoded string.
 */
char *leet(char *str)
{
char *letters = "aeotl";
char *leet_eq = "43071";
int i = 0;
while (str[i] != '\0')
{
int j = 0;
while (letters[j] != '\0')
{
if (str[i] == letters[j] || str[i] == letters[j] - 'a' + 'A')
{
str[i] = leet_eq[j];
break;
}
j++;
}
i++;
}
return (str);
}
