#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a list
 * and returns the head node's data n.
 * @head: A pointer to listint_t structure.
 * Return: The head node's datafrom deleted element
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int i;

	if (*head == NULL)
		return (0);

	i = (*head)->i;
	new = (*head)->next;
	free(*head);
	*head = new;
	return (i);
}
