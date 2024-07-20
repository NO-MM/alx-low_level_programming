#include "main.h"
/**
 * print_alphabets_x10 - entry point
 *
 * Description: This function prints 10 times, in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
char lt;
int i;
i = 0;
while (i < 10)
{
for (lt = 'a'; lt <= 'z'; lt++)
{
_putchar(lt);
}
_putchar('\n');
i++;
}
}
