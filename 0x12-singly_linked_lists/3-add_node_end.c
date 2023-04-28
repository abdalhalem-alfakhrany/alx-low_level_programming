#include "lists.h"

/**
 * add_node_end - add new node at last of list
 * @head: pointer to head of list
 * @str: new node string
 * Return: pointer to the node added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *tmp = *head;

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
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
