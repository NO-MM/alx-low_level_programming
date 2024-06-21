#include <stdio.h>

int main(int argc, char *argv[])
{
int intType;
float floatType;
double doubleTye;
char charType;

printf("Size of int: %zu byte\n", Sizeof(intType));
printf("Size of float: %zu byte\n", Sizeof(floatType));
printf("Size of double: %zu byte\n", Sizeof(doubleType));
printf("Size of char: %zu byte\n", Sizeof(charType));

return (0);

}
