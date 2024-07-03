#include "main.h"
/**
 * void reverse_array - The function that reverses the
 * the content of an array of integers
 * @a: An int
 * @n: An int
 * return: reversed content of intenger
 */
void reverse_array(int *a, int n)
{
int s = 0;
int e = n - 1;
while (s < e)
{
int temp = a[s];
a[s] = a[e];
a[e] = temp;
s++;
e--;
}
}
