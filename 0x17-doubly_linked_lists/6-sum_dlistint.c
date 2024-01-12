#include "lists.h"
/**
 * sum_dlistint -  prints all the elements of a dlistint_t list.
 * @head: head
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (NULL);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
