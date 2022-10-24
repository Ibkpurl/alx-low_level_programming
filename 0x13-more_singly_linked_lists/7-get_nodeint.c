#include "lists.h"

/**
 * get_nodeint_at_index - function that gets a node of list at specific index
 * @head: A pointer to listint_t
 * @index: The index of the node
 * Return: A pointer to node at specified index, or NULL if not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (p == index)
			return (head);
		head = head->next;
		p++;
	}
	return (NULL);
}
