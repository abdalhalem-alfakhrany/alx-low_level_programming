#include "function_pointers.h"

/**
 * int_index - compate all array elemnt using cmp function
 * @array: the array to compare within
 * @size: size of array
 * @cmp: compareing function pointer
 * Return: -1 if failer of no math , array index if cmp return more than 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);

	return (-1);
}
