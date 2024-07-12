#include "main.h"
#include <stdio.h>
/**
 * factorial - The function that returns the factorial
 * of a given number.
 * @n: int
 *
 * Return: If n is lower than 0, return -1.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
