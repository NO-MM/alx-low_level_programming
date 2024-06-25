#include <stdio.h>
int main(void)
{
int 1;
float 2;
long int 3;
long long int 4;
char 5;
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(1));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(2));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(3));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(4));
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(5));
return (0);
}
