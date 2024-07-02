#include <stdio.h>
/**
 * swap_int - This function swaps the values of two integers
 *
 * @int *a *b
 * return: void
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
