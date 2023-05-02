#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node it in idx of list
 * @head: pointer to first node
 * @idx: the index to insert in
 * @n: the value to be inserted
 * Return: NULL if failer, the pointer to new node in Success
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp;

	if (!(*head))
		return (NULL);

	tmp = *head;

	while (tmp)
	{
		if (i == idx - 1)
		{
			listint_t *new_node = malloc(sizeof(listint_t));

			new_node->n = n;
			new_node->next = tmp->next;
			*tmp = *new_node;

			return (new_node);
		}
		i++;
		if (!tmp->next)
			return (NULL);
		tmp = tmp->next;
	}

	return (NULL);
}
