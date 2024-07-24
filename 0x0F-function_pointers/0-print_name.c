#include "function_pointers.h"
/**
 * print_name - This function prints a name.
 *
 * @f: a variable to hold a string name.
 * @name: name of the person.
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
