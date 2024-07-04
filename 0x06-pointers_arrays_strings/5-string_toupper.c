#include "main.h"
#include <stddef.h>
/**
 * *string_toupper - The function that changes all lowercase
 * letters of a string to uppercase
 * @str: string to uppercase
 * @'':
 * return: string to uppercase
 */
char *string_toupper(char *str)
{
char *ptr = str;
while (*ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - 'a' + 'A';
}
ptr++;
}
return (str);
}
