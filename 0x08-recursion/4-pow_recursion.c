#include "main.h"
#include <stdio.h>
/**
 *  _pow_recursion - The function that return the value
 * of x raised to the power of y.
 * @x: int
 * @y: int
 *
 * Return: -1 if y is lower than 0.
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
if (y < 0)
{
return (-1);
}
return (x * _pow_recursion(x, y - 1));
}
