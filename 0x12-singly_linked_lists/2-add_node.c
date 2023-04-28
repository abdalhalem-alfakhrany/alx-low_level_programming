#include "lists.h"

/**
 * add_node - adds new node to the beginning of list
 * @head: pointer to the first node in list
 * @str: the string to be added
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	int str_len;
	list_t *new;

	if (!head || !str)
		return (NULL);
	str_len = strlen(str);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = malloc(str_len);
	memcpy(new->str, str, str_len);
	new->len = str_len;
	new->next = (*head);
	(*head) = new;
	return (new);
}
