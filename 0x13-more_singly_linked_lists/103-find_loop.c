#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head;
	listint_t *slow_list = head;

	if (!head)
		return (NULL);

	while (slow_list && fast && fast->next)
	{
		fast = fast->next->next;
		slow_list = slow_list->next;
		if (fast == slow_list)
		{
			slow_list = head;
			while (slow_list != fast)
			{
				slow_list = slow_list->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
