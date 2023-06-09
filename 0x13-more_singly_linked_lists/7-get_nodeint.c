#include "lists.h"

/**
 * get_nodeint_at_index - get the node at the index givend
 * @head: the first node at the list
 * @index: index of node needed
 * Return: pointer to the node at that ondax
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (!head->next)
			return (NULL);
		head = head->next;
	}

	return (head);
}
