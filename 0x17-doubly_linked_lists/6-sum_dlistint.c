#include "lists.h"
/**
 * sum_dlistint - A function that sum the total number of data(n) in a d_list.
 *
 * @head: The pointer to the head of the list.
 *
 * Return: The total number of data(n).
 */
int sum_dlistint(dlistint_t *head)
{
size_t sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
