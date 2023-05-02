#include "lists.h"

/**
 * pop_listint - return the first node value and free it
 * @head: pointer to the first node in list
 * Return: the value iof the first node
 */
int pop_listint(listint_t **head)
{
	int lastint;
	listint_t *tmp;

	if (!head || *head == 0)
		return (0);

	lastint = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (lastint);
}
