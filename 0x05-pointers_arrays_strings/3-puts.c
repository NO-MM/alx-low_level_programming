#include "main.h"
/**
 * _puts(char *str) - This function prints a string, followed by a newline, to stdout
 *
 * Return: string
 */
void _puts(char *str)
{
  for (;*str != '\0'; str++)
    {
      putchar(*str);
    }
  putchar('\n');
}
