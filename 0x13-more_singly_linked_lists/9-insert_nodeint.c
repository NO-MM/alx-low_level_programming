#include "lists.h"
/**
 * create_new_node - A function that create a new node.
 * @n: The data node.
 *
 * Return: Point to the node.
 */
listint_t *create_new_node(int n)
{
listint_t *new_node;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
return (new_node);
}
/**
 * insert_nodeint_at_index - A function that inserts a new node.
 * @head:  A pointer to the first element of the list.
 * @idx: Index to the position the new node is to be inserted.
 * @n: The data of the new node created.
 *
 * Return: The address of the newly created node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *tmp;
listint_t *tmp_old;
listint_t *new_node;
tmp = *head;
if (head == NULL)
return (NULL);
new_node = create_new_node(n);
if (new_node == NULL)
return (NULL);
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
if (idx == 0)
*head = new_node;
for (i = 0; i < idx - 1 && tmp != NULL && idx != 0; i++)
tmp = tmp->next;
if (tmp == NULL)
return (NULL);
if (idx == 0)
new_node->next = tmp;
else
{
tmp_old = tmp->next;
tmp->next = new_node;
new_node->next = tmp_old;
}
return (new_node);
}
