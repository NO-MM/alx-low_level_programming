#include "main.h"
/**
 * print_diagonal - Ther function that draws a diagonal line on terminal
 *
 * Return: void
 */
void print_diagonal(int n)
{
if (n <= 0)
putchar('\n');
else
{
int i, s;
for (i = 0; i < n; i++)
{
for (s = 0; s <= i; s++)
putchar(' ');
putchar('\\');
putchar('\n');
}
}
}
