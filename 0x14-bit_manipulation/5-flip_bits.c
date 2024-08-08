#include "main.h"
/**
 * flip_bits - A function that returns the number of bits.
 * @n: The first number to be compared.
 * @m: The second number to be compared.
 *
 * Return: The number of bits you want to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int result;
unsigned long int count;
result = n ^ m;
for (count = 0; result > 0;)
{
if ((result & 1) == 1)
count++;
result = result >> 1;
}
return (count);
}
