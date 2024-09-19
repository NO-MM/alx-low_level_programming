#include "lists.h"
/**
 * add_dnodeint - A function that adds a new node at the front of a d_lists.
 *
 * @head: A double pointer head of the list to the list.
 * @n: The integer to add to the new node.
 *
 * Return: A pointer to the new list.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->prev = NULL;
new->next = NULL;
new->next = *head;
if (*head != NULL)
{
(*head)->prev = new;
}
*head = new;
return (*head);
}
