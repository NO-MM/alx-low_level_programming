#include <stdio.h>
#include "main.h"
/**
 * main - A function that prints the number of arguments.
 * to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
