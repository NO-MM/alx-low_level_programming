#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - The function that prints the sum of
 * the two diagonals of a square matrix of integers.
 * @a: int
 * @size: int
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int sum_primary = 0;
int sum_secondary = 0;
int i;
int temp;
for (i = 0; i < size; i++)
{
sum_primary += *(a + i * size + i);
}
for (i = 0; i < size; i++)
{
sum_secondary += * (a + i *size + (size - 1 - i));
}
temp = sum_primary;
if (temp == 0)
{
putchar('0');
}
else
{
while (temp != 0)
{
putchar(temp % 10 + '0');
temp /= 10;
}
}
putchar('\n');
temp = sum_secondary;
if (temp == 0)
{
putchar('0');
}
else
{
while (temp != 0)
{
putchar(temp % 10 + '0');
temp /= 10;
}
}
putchar('\n');
}
