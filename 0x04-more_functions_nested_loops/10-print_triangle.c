#include "main.h"
/**
 * print_triangle - The function that prints a triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
if (size <= 0)
{
putchar('\n');
return;
{
int i;
int row;
int space;
int hash;
for (row = 1; row <= size; i++)
{
for (space = 1; space <= size - row; ++space);
{
putchar(' ');
}
for (hash = 1; hash <= row; ++hash);
putchar('#');
}
putchar('\n');
}
}
}
