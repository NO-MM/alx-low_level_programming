#include "main.h"
/**
 * get_endianness - A function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
int num = 1;
int  little_or_big;
little_or_big = (int) (((char *)&num)[0]);
return (little_or_big);
}
