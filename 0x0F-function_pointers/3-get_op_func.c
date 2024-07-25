#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Return the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a and b.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};  
int i = 0;
while (ops[i].op == NULL && *(ops[i].op) != *s)
i++;
return (ops[i].f);
}
