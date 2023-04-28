#include "lists.h"

/**
 * print_list - print the list elemnt and length
 * @h: pointer to the head of list
 * Return: the size of list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		count++;
		h = h->next;
	}

	return (count);
}
