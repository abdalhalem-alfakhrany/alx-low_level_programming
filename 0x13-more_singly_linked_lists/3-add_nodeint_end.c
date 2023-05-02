#include "lists.h"

/**
 * add_nodeint_end - add new node at last of list
 * @head: pointer to head of list
 * @n: new node number
 * Return: pointer to the node added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!(*head))
	{
		(*head) = new;
		return (new);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}
