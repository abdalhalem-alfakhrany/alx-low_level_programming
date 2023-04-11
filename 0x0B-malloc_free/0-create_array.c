#include "main.h"
#include "stdlib.h"
#include "memory.h"

char *create_array(unsigned int size, char c)
{
	char *array = NULL;

	if(size < 0)
		return NULL;
	
	array = malloc(sizeof(char) * size);
	memset(array, c, sizeof(char) * size);
	return (array);
}
