#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * _strlen - The function the finds a length
 * of a string.
 * @str: A string.
 *
 * Return: Length of a string.
 */
unsigned int _strlen(char *str)
{
unsigned int i;
for (i = 0; str[i]; i++)
;
return (i);
}
/**
 * add_node_end - The funcion that add a new
 * node to the end of linked list.
 * @head: double pointer to a linked list.
 * @str: A string to add to the new node.
 *
 * Return: pointer to the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *tmp;
if (str == NULL)
return (NULL);
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
new->len = strlen(new->str);
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
tmp = *head;
while (tmp->next)
tmp = tmp->next;
tmp->next = new;
return (new);
}
