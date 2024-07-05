#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SEPARATORS " \t\n,;.!\"(){}"
/**
 * cap_string - Capitalizes all words of a string.
 * @str: string to modify.
 *
 * Result: Pointer to the modified string
 */
char *cap_string(char *str)
{
int cap_next_alp = 1;
while (*str != '\0')
{
if (strchr(SEPARATORS, *str) != NULL)
{
cap_next_alp = 1;
}
else if (cap_next_alp && isalpha(*str))
{
*str = toupper(*str);
cap_next_alp = 0;
}
str++;
}
return (str);
}
