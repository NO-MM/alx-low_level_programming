#include "main.h"
/**
 * isupper - The function that checks for uppercase character
 * @parameter 1 is c
 *Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
