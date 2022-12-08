#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - A function that inserts a node at
 * position in a list.
 * @h: The double pointer to the head.
 * @idx: The index to insert new node at.
 * @n: The data to add to new node.
 * Return: A pointer to new element, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *fresh_node = NULL, *temp = NULL;
	unsigned int i = 0;

	fresh_node = malloc(sizeof(dlistint_t));
	if (!fresh_node)
		return (NULL);
	fresh_node->next = NULL;
	fresh_node->prev = NULL;
	fresh_node->n = n;
	if (!h || !(*h))
		*h = fresh_node;
	else
	{
		temp = *h;
		while (idx != i++ && temp->next)
			temp = temp->next;
		if (temp->next)
			fresh_node->prev = temp->prev;
		else
			fresh_node->prev = temp;
		if (idx == i)
			temp->next = fresh_node, fresh_node->prev = temp;
		else if (idx == i - 1)
		{
			if (temp->prev)
				temp->prev->next = fresh_node;
			else
				*h = fresh_node;
			temp->prev = fresh_node;
			fresh_node->next = temp;
		}
		else
		{
			free(fresh_node);
			return (NULL);
		}
	}
	return (fresh_node);
}
