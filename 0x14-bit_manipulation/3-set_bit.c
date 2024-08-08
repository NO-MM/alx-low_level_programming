#include "main.h"
/**
 * set_bit - A function that set the value of bit to a given index.
 * @n: A pointer to the bit to be manipulated.
 * @index: A position of the bit to be manipulated.
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int b_mask;
if (index > sizeof(unsigned int) * 8)
return (-1);
b_mask = 1;
b_mask = b_mask << index;
*n = ((*n) | b_mask);
return (1);
}
