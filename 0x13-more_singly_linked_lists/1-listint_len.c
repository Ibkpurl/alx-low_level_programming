#include "lists.h"

/**
 * listint_len - function used to display number
 of elements in the list.
 * @h: singly linked list
 * Return: returns number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i;

	i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;

	}
	return (i);
}
