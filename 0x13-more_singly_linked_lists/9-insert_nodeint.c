#include "lists.h"

/**
 * insert_nodeint_at_index -  function that inserts a new node at
 * a given position.
 * @head: pointer to struct
 * @idx: index of the list
 * @n: pointer to struct
 * Return: the address of the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p;
	listint_t *h;
	unsigned int index;

	p = malloc(sizeof(listint_t));
	if (!p)
		return (NULL);
	p->n = n;
	h = *head;
	if (idx == 0)
	{
		p->next = h;
		(*head) = p;
		return (p);
	}
	index = 0;
	while (index < idx - 1)
	{
		if ((*head) == NULL || (*head)->next == NULL)
			return (NULL);
		h = h->next;
		index++;
	}
	p->next = h->next;
	h->next = p;
	return (p);
}
