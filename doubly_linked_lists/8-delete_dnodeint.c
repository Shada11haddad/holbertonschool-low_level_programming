#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * of a dlistint_t linked list
 * @head: address of the pointer to the head of the list
 * @index: index of the node that should be deleted, starting from 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	node = *head;
	for (i = 0; i < index; i++)
	{
		node = (*node).next;
		if (node == NULL)
			return (-1);
	}

	if ((*node).prev != NULL)
		(*(*node).prev).next = (*node).next;
	else
		*head = (*node).next;

	if ((*node).next != NULL)
		(*(*node).next).prev = (*node).prev;

	free(node);
	return (1);
}
