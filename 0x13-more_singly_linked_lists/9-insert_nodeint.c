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
	unsigned int i;
	listint_t *tmp, *new_node;

	if (!(*head))
		return (NULL);
	tmp = *head;
	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		new_node->n = n;
		if (!new_node)
			return (NULL);
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node = malloc(sizeof(listint_t));
			new_node->n = n;

			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
