#include "main.h"
/**
 * _puts - This function prints a string, followed by a newline, to stdout
 *@str: The string
 * Return: string
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
putchar(*str);
}
putchar('\n');
}
