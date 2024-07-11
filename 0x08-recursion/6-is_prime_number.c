#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - The funciton that returns 1 if the
 * integer is a prime number, otherwise return 0.
 * @n: int
 *
 * Return: 1 if integer is prime.
 */
int is_prime_number(int n)
{
return (n);
}
/**
 * check_prime - The funciton that returns 1 if the
 * integer is a prime number, otherwise return 0.
 * @n: int
 * @i: int
 * Return: 1 if integer is prime.
 */
int check_prime(int n, int i)
{
if (n <= 1)
{
return (0);
}
if (n % i == 0 && i > 1)
{
return (0);
}
if ((n / i) < i)
{
return (1);
}
return (n);
}
