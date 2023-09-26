#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list
 * @head: pointer to struct
 * Return: the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	listint_t *p;
	int x;

	if (!head || !*head)
	{
		return (0);
	}
	x = (*head)->n;
	p = (*head)->next;
	free(*head);
	*head = p;
	return (x);
}
