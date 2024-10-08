#include "lists.h"
/**
 * delete.dnodeint_at_index - A function that delete a node at the index.
 *
 * @head: double pointer to the node.
 * @index: The index of the node.
 *
 * Return: 1 if success and -1 as failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = *head;
if (*head == NULL)
return (-1);
for (; index != 0; index--)
{
if (temp == NULL)
return (-1);
temp = temp->next;
}
if (temp == *head)
{
*head = temp->next;
if (*head != NULL)
(*head)->prev = NULL;
}
else
{
temp->prev->next = temp->next;
if (temp->next != NULL)
temp->next->prev = temp->prev;
}
free(temp);
return (1);
}
