#include "lists.h"

/**
 * delete_nodeint_at_index - remove node from list at index
 * @head: pointer to the first node in list
 * @index: node index in list
 * Return: -1 if failer, 1 if every thing is all write
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *tmp1;

	if (!(*head))
		return (-1);

	tmp = *head;


	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
		tmp = tmp->next;

	if (i != index - 1)
		return (-1);

	if (tmp->next == NULL)
		return (-1);

	tmp1 = tmp->next;

	tmp->next = (tmp->next)->next;
	free(tmp1);
	return (1);
}
