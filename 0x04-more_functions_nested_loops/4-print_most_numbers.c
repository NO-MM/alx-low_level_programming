#include "main.h"
/**
 * Print most numbers - The function that print the numbers,
 * from 0 to 9 exclude 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i != 2 && i != 4)
putchar(i + '0');
}
putchar('\n');
}
