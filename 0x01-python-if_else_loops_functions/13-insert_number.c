#include "lists.h"

/**
 * insert_node - Adds a value to a sorted singly-linked list.
 * @head: Pointer to the linked list's head.
 * @number: The value to be added.
 * Return: A pointer to the new node or 0 on failure.
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	if (node == NULL || node->n >= number)
	{
		new->next = node;
		*head = new;
		return (new);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	new->next = node->next;
	node->next = new;

	return (new);
}
