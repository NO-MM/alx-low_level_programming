#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grind - Prints a grid of integers.
 * @grid: address of two dimensional grid.
 * @height: heigth of the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
