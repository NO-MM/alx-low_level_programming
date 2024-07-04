#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * *cap_string - The function that capitalizes all words of a string
 *
 * result: Always 0
 */
char *cap_string(char *str)
{
int cap_next_alp = 1;
char *ptr = str;
while (*ptr != '\0')
{
if (isspace(*ptr) || *ptr == ';' || *ptr == ';' || *ptr == ';' || *ptr == '!' || *ptr == '?' || *ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
{
cap_next_alp = 1;
}
else if (cap_next_alp && isalpha(*ptr))
{
*ptr = toupper(*ptr);
cap_next_alp = 0;
}
ptr++;
}
return (str);
}
