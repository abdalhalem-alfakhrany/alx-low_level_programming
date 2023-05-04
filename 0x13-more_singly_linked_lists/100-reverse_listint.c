#include "lists.h"

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *new_list;

	if (!(*head))
		return (NULL);

	new_list = malloc(sizeof(listint_t));

	while (tmp)
	{
		tmp = malloc(sizeof(listint_t));
		tmp->next = new_list;
		new_list = tmp;
		
		tmp = tmp->next;
	}
	return (new_list);
}
