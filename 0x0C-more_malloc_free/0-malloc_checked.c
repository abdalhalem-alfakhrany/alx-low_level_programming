#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked - allocate memory and check it
 * @b: the memory size
 * Return: pointer to allcated memory
 */
void *malloc_checked(unsigned int b)
{
	void *allocated = malloc(b);

	if (!allocated)
		exit(98);

	return (allocated);
}
