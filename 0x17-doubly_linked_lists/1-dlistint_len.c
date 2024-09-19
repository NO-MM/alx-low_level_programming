#include "lists.h"
/**
 * dlistint_len - A function that print all elements of dlistint_t list.
 *
 * @h: The head pointer of the list to the list.
 *
 * Return: Return the number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t node_no = 0;
while (h)
{
node_no += 1;
h = h->next;
}
return (node_no);
}
