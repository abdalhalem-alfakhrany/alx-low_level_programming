#include "lists.h"

/**
 * print_list - print the list elemnt and length
 * @h: pointer to the head of list
 * Return: the size of list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	list_t node;

	if (!h)
		return (-1);

	node = *h;
	while (1)
	{
		int len;
		char *s;

		if (node.str == NULL)
		{
			s = malloc(5);
			if (s)
				s = "(nil)";

			len = 0;
		}
		else
		{
			len = node.len;
			s = node.str;
		}
		printf("[%d] %s\n", len, s);
		i++;
		if (node.next == NULL)
			break;
		node = *node.next;
	}

	return (i);
}
