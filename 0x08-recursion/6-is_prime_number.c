#include "main.h"
#include <stdio.h>
int actual_prime_number(int n, int i);
/**
 * is_prime_number - The funciton that returns 1 if the
 * integer is a prime number, otherwise return 0.
 * @n: int
 *
 * Return: 1 if integer is prime.
 */
int is_prime_number(int n)
{
if  (n <= 1)
return (0);
return (actual_prime_number(n, n - 1));
}
/**
 * actual_prime_number - The funtion that calculate if a
 * number is prime recursively.
 * @n: The number to be evaluated.
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime_number(int n, int i)
{
if (i == 1)
{
return (1);
}
if (n % i == 0 && i > 0)
{
return (0);
}
return (actual_prime_number(n, i - 1));
}
