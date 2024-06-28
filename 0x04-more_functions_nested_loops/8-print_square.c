#include "main.h"
/**
 * print_square - This function prints a square
 * @parameter size
 * Return: void
 */
void print_square(int size)
{
if (size <= 0)
putchar('\n');
else
{
int i, s;
for (i = 1; i <= size; i++)
{
for (s = 1; s <= size; s++)
putchar('#');
putchar('\n');
}
}
}
