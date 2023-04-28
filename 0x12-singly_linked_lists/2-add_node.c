#include "lists.h"

/**
 * add_node - adds new node to the beginning of list
 * @head: pointer to the first node in list
 * @str: the string to be added
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);

	new->next = (*head);
	(*head) = new;

	return (new);
}
