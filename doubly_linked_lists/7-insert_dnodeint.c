#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: address of the pointer to the head of the list
 * @idx: index where the new node should be added, starting from 0
 * @n: value to store in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *node;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	node = *h;
	for (i = 0; node != NULL && i < idx - 1; i++)
		node = (*node).next;
	if (node == NULL)
		return (NULL);
	if ((*node).next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	(*new).n = n;
	(*new).prev = node;
	(*new).next = (*node).next;
	(*(*node).next).prev = new;
	(*node).next = new;

	return (new);
}
