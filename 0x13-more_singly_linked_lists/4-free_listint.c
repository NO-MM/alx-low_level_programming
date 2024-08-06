#include "lists.h"
/**
 * free_listint - A function that frees a listint_t list.
 * @head: The pointer to the first node of the list.
 * 
 * Return: No return.
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while ((temp = head) != NULL)
{  
head = head->next;
free(temp);
}
}
