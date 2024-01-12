#include "lists.h"
/**
 * get_dnodeint_at_index -  prints all the elements of a dlistint_t list.
 * @head: head
 * @index: index
 * Return: the nth
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++
	}
	return (NULL);
}
