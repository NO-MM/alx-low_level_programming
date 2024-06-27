#include <stdio.h>
/**
* main - Dertemine if number is positive, negetive or zero.
(* 0: is the number to be checked
*
* Return: 0 (Success)
*/
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i < 0)
{
printf("%d is negetive\n", i);
}
else
{
printf("%d is zero\n", i);
}
positive_or_negative(i);
return (0);
}
