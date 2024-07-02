#include <stdio.h>
#include "main.h"
/**
 * puts_half(char *str) - This function prints half of a string
 *
 * return: void
 */
void puts_half(char *str)
{
int j = 0;
int k;
while (str[j] != '\n')
{
j++;
}
if (j % 2 == 1)
{
k = (j - 1) / 2;
k += 1;
}
else
{
k = j / 2;
}
 for (;k < j; k++)
{
putchar(str[k]);
}
}
