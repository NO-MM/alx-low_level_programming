#include "main.h"
/**
 * isdigit - This function checks for a digit 0 through 9
 *
 * Return: 1 if c is digit and 0 if failure
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
