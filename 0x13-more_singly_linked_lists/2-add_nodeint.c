#include "lists.h"

/**
 * add_nodeint - adds new node to the beginning of list
 * @head: pointer to the first node in list
 * @n: the number to be added
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->n = n;

	new->next = (*head);
	(*head) = new;

	return (new);
}
