#include <stdio.h>
int main(void)
{
int i;
float f;
long int li;
long long int lli;
char c;
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(li));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
return (0);
}
