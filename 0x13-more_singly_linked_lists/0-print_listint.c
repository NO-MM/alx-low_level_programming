#include "lists.h"
/**
 * print_listint - A function that prints all emements of
 * a listint_t list.
 * @h: The head pointer to the list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
size_t count;
if (h == NULL)
return (0);
for (count = 0; h != NULL; count++)
{
printf("%d\n", h->n);
h = h->next;
}
return (count);
}
