#include "lists.h"
/**
 * *add_dnodeint_end - A function that add node at the end of a list.
 *
 * @head: A double pointer to the head of the list.
 * @n: The data of the new list to be inserted.
 *
 * Return: A pointer to the new list creqated.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *temp;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
new->prev = NULL;
*head = new;
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
new->prev = temp;
}
return (new);
}
