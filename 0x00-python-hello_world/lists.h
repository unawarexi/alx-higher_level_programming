#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * Structure for a singly linked list
 * @n: an integer value
 * @next: points to the next node in the list
 *
 * Description: Defines the structure of a node in a singly linked list
 * 
 */

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */

