#include "lists.h"

/**
 * sum_listint - caculate the summition of all list nodes
 * @head: pointer to the first node
 * Return: 0 if head is NULL ;or the sum of nodes values
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
