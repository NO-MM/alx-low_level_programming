#include "main.h"
/**
* More_numbers - This function prints 10 times number 0 to 14
*
* Return: void
*/
void more_numbers(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
putchar(j / 10 + '0');
putchar(j % 10 + '0');
}
putchar('\n');
}
}
