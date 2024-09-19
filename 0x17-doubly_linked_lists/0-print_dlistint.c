#include "lists.h"
/**
 * print_dlistint - A function that prints all element of dlistint_t list.
 *
 * @h: A head pointer of the list to the list.
 *
 * Return: Return the number of node in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t node_no = 0;
while (h)
{
node_no += 1;
printf("%d\n", h->n);
h = h->next;
}
return (node_no);
}
