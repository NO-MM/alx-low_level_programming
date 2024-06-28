#include "main.h"
/**
 * Print line - The function that draws a straight line in terminal
 *
 * Return: void
 */
void print_line(int n)
{
if (n <= 0)
putchar('\n');
else
{
int i;
for (i = 1; i <= n; i++)
putchar('_');
{
putchar('\n');
}
}
}
