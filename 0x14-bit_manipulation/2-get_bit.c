#include "main.h"
#include <stddef.h>
/**
 * get_bit - A funciton that returns the value of a bit at a given index.
 * @n: The numbet to check the value.
 * @index: The index of the bit to be received.
 *
 * Return: int 1 0r 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i;
if (index > sizeof(size_t) * 8)
return (-1);
for (i = 0; i < index; i++)
n = n >> 1;
return ((n & 1));
}
