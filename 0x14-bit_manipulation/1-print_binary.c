#include "main.h"
#include <stdio.h>
/**
 * print_binry - A function that print the binary representation
 * of a numbere recursively
 * @n: A decimal input.
 *
 * Return: void.
 */
void print_binry(unsigned long int n)
{
if (n == 0)
return;
print_binry(n >> 1);
if ((n & 1) == 1)
putchar('1');
if ((n & 1) == 0)
putchar('0');
}
/**
 * print_binary - A function that prints the binary representation
 * of a number.
 * @n:
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
if (n == 0)
putchar('0');
else
{
print_binry(n);
}
}
