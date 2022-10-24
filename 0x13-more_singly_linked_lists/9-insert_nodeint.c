#include "lists.h"
/**
 * insert_nodeint_at_index - Function that inserts node at given index
 * @head: pointer to pointer of type listint_t
 * @idx: unsigned int, index where new node will be added
 * @n: int parameter
 * Return: returns address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new, *tmp = *head;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = tmp;
		*head = new;
		return (new);
	}
	for (; count < (idx - 1); count++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
