#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - The function that prints the chessboard.
 * @a: A pointer
 *
 * Return 0 (success)
 */
void print_chessboard(char (*a)[8])
{
int row;
int col;
for (row = 0 ; row < 8; row++)
{
for (col = 0; col < 8; col++)
{
putchar(a[row][col]);
putchar(' ');
}
putchar('\n');
}
}
