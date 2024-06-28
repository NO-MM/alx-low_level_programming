#include <stdio.h>
/**
 * Main - This function prints the numbers 1 to 100 but multiples
 * of 3 print Fizz instead of number and multiples of five print
 * Buzz and number which are multipleof both 3 and 5 print FizzBuzz
 *
 * Return: 0 (Success)
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
printf("%s", "FizzBuzz");
else if (i % 3 == 0)
printf("%s", "Fizz");
else if (i % 5 == 0)
printf("%s", "Buzz");
else
printf("%d", i);
if (i != 100)
printf(" ");
}
printf("\n");
return (0);
}
