#include "main.h"
/**
 * print_rev - This function prints a string, in reverse
 *@s: The string
 * return: 0
 */
void print_rev(char *s)
{
int l = 0;
while (s[l] != '\0')
{
l++;
}
for (l -= 1; l >= 0; l--)
putchar(s[l]);
putchar('\n');
}
