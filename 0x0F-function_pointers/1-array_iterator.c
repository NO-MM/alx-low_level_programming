#include "function_pointers.h"
/**
 * array_iterator - A function that excecutes a funtion given as a
 * parameter on each element of an array.
 * @array: The array.
 * @size: The size of array.
 * @action: A pointer to the function to excecuted.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
return;
while (size-- > 0)
{
action(*array);
array++;
}
}
