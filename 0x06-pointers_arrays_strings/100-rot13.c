#include "main.h"
#include "string.h"

/**
 * rot13 - encode text bey rot13 algorith
 * @str: string to bet encoded
 * Return: pointer to string
 */
char *rot13(char *str)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(str + i))
			{
				*(str + i) = b[j];
				break;
			}
		}
	}
	return (str);
}
