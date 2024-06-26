#include "main.h"
/**
 * main - print function that prints 10 times, in lowercase
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
