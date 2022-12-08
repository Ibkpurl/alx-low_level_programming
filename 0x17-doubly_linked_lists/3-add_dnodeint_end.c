#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - A function that adds a node to the end of list.
 * @head: The double pointer to the head.
 * @n: The data to add to new node.
 * Return: pointer to new element, NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *fresh_node = NULL, *temp = NULL;

	fresh_node = malloc(sizeof(dlistint_t));
	if (!fresh_node)
	{
		free(fresh_node);
		return (NULL);
	}
	fresh_node->next = NULL;
	fresh_node->prev = NULL;
	fresh_node->n = n;

	if (!head || !(*head))
	{
		*head = fresh_node;
		return (fresh_node);
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;

		fresh_node->prev = temp;
		temp->next = fresh_node;

		return (fresh_node);
	}
	return (NULL);
}
