#include "main.h"
#include <stddef.h>
/**
 * clear_bit - A function that set the value of a bit of a given index.
 * @n: An int that point to a number.
 * @index: An index that positioned to change bit to 0
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int b_mask;
b_mask = 1;
b_mask = b_mask << index;
if (index > sizeof(unsigned long int) * 8 || n == NULL)
return (-1);
if (((*n >> index) & 1) == 1)
*n = b_mask ^ *n;
return (1);
}
