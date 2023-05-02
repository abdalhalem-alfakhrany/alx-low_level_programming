#include "lists.h"

/**
 * print_listint - print the list elemnt and length
 * @h: pointer to the head of list
 * Return: the size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
