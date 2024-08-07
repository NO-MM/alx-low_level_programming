#include "lists.h"
/**
 * *add_nodeint - A function that add a new node at the
 * beggining of a listint_t list.
 * @head: The head of the pointer.
 * @n: A new int. to be created.
 *
 * Return: The address of the new element,
 * or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
if (head == NULL)
return (0);
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
if (*head == NULL)
new_node->next = NULL;
else
new_node->next = *head;
new_node->n = n;
*head = new_node;
return (0);
}
