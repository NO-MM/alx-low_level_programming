#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - The function that create array of char
* @size: The size of the array.
* @c: The character.
*
* Return: Pointer to created array,or NULL if size is 0 or malloc fails.
*/
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
str = malloc(size * sizeof(char));
if (size == 0 || str == NULL)
return (NULL);
for (i = 0; i < size; ++i)
{
str[i] = c;
}
return (str);
}
