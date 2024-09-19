#include "lists.h"
/**
 * get_dnodeint_at_index - A function that get a node at a particular index of a d_lis.
 *
 * @head: A pointer to the head of the node.
 * @index: The index to retrieve it node.
 *
 * Return: A pointer to the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
size_t itr = 0;
for (itr = 0; itr < index; itr++)
{
if (head == NULL)
head = head->next;
}
return (head);
}
