#include "string.h"
#include "main.h"

char *_strpbrk(char *s, char *accept)
{
	int i, len = strlen(accept);

	for (i = 0; i < len; i++)
	{
		char *res = strchr(s, accept[i]);
		if (res)
			return (res);
	}
	return NULL;
}
