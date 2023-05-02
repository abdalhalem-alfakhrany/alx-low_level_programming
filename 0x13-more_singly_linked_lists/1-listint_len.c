#include "lists.h"

/**
 * listint_len - get the length of list h
 * @h: the list
 * Return: length of list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
