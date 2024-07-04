#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *leet - The function that encodes a string into 1337
 * 
 * return: encoded
 */
char *leet(char *str)
{
int i;
for (i = 0; str[i] != '\0'; ++i)
{
if (tolower(str[i]) == 'a')
{
str[i] = '4';
}
else if (tolower(str[i]) == 'e')
{
str[i] = '3';
}
else if (tolower(str[i]) == 'o')
{
str[i] = '0';
}
else if (tolower[i]) == 't')
{
str[i] = '7';
}
else if (tolower[i]) == 'l')
{
str[i] = '1';
}
}
return(str);
}
