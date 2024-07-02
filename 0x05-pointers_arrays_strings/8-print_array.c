#include <stdio.h>
#include "main.h"
/**
 * print_array - This funtion prints n elements of an array of integers
 *@a: The input array
 *@n: The lenght of the array
 * return: void
 */
void print_array(int *a, int n)
{
int j;
for (j = 0; j < n; j++)
{
printf("%d", a[j]);
if (j != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
