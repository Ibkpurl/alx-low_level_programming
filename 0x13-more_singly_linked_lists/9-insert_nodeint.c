#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts node at given index
 * @head: A pointer to listint_t structure
 * @idx: The index of the list
 * @n: An integer
 * Return: The address to new node at specified index, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *new, *tmp;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->n = n;
		return (new);
	}

	if (idx == 0)
	{
		new->next = *head;
		new->n = n;
		*head = new;
		return (new);
	}

	tmp = *head;
	while (i < idx)
	{
		tmp = tmp->next;
		i++;
	}

	new->n = n;
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
