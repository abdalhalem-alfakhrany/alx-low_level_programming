#include "function_pointers.h"

/**
 * array_iterator - itrate though array calling fucntion action foreach element
 * @array: the array
 * @size: array size
 * @action: the action to be invoked
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
