#include "lists.h"
/**
 * pop_listint - The function that create a new node.
 * @head: The pointer to the list.
 *
 * Return: The int.
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *tmp;
if (head == NULL || *head == NULL)
return (0);
n = (*head)->n;
tmp = *head;
*head = (*head)->next;
free(tmp);
return (n);
}
