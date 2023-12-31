#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to struct
 * Return: Void
*/

void free_listint(listint_t *head)
{
	listint_t *p;

	while (head)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
