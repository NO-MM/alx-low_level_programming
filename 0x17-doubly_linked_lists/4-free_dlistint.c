#include "lists.h"
/**
 * free_dlistint - A function that frees a double linked list.
 *
 * @head: A pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
while (head)
{
temp = head;
head = head->next;
free (temp);
}
}
