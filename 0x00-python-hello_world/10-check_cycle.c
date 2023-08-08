#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Determines if a cycle exists in a singly-linked list.
 * @list: A singly-linked list.
 *
 * Return: 0 if no cycle is detected, 1 if a cycle is present.
 */

int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (list == NULL || list->next == NULL)
		return (0);

	slow = list->next;
	fast = list->next->next;

	while (slow && fast && fast->next)
	{
		if (slow == fast)
			return (1);

		slow = slow->next;
		fast = fast->next->next;
	}

	return (0);
}

