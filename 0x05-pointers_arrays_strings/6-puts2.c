#include "main.h"
/**
 * puts2(char *str) - This funtion prints every other character or a string,
 * starting with the first character
 *
 * return: void
 */
void puts2(char *str)
{
  int i;
  int j = 0;
  while (str[j] != '\0')
    {
      j++;
    }
  for (i = 0; i < j; i += 2)
    {
      putchar(str[i]);
    }
  putchar('\n');
}
