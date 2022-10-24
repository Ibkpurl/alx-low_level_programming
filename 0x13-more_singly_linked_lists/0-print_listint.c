#include "lists.h"

/**
 * print_listint - function that print all content
 * @h: singly linked list
 * Return: prints elements of the list
 */
size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);

}
