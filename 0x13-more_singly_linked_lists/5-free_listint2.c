#include "lists.h"

/**
 * free_listint2 - set the list head to NULL to meke it like empty
 * @head: pointer to the first list node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *head_ptr;

	if (!head)
		return;

	head_ptr = *head;
	while (head_ptr)
	{
		tmp = head_ptr->next;
		free(head_ptr);
		head_ptr = tmp;
	}
	*head = NULL;
}
