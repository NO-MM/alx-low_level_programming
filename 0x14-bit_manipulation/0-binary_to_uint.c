#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - A function that converts a binary number to
 * an unsigned int.
 * @b: A character that point a string containing binary numbers.
 *
 * Return: The conveted decimal (output)
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int len;
size_t i = 0;
size_t d = 0;
size_t sum = 0;
size_t pow = 1;
int base = 2;
if (b == NULL)
return (0);
for (len = 0; b[len] != '\0'; len++)
;
if (len == 1 && (b[0] == '0' || b[0] == '1'))
return (b[0] - 48);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
for (d = len - 1; d > 0; d--)
pow = pow *base;
sum = sum + (pow * (b[i] - 48));
len--;
pow = 1;
}
return (sum);
}
