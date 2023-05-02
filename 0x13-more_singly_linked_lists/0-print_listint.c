#include "lists.h"

/**
 * print_listint - print the list elemnt and length
 * @h: pointer to the head of list
 * Return: the size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);

	while (h)
	{
		putchar('0' + h->n);
		putchar('\n');
		count++;
		h = h->next;
	}

	return (count);
}
