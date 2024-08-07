#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * _strlen - The function that returns the length
 * of a string.
 * @s: A character.
 *
 * Return: Value is i.
 */
int _strlen(const char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
 * add_node - The function that adds a new node
 * at the beginning of a list_t list.
 * @head: A head of a list_t list.
 * @str: A value to insert into element.
 *
 * Return: The number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *add;
add = malloc(sizeof(list_t));
if (add == NULL)
return (NULL);
add->str = strdup(str);
add->len = _strlen(str);
add->next = *head;
*head = add;
return (add);
}
