#include "main.h"

/**
 * binary_to_uint - convert binary number to unsigned integer
 * @b: the string
 * Return: 0 if failer , the number if Success
 */
unsigned int binary_to_uint(const char *b)
{
	int i, scaler = 1;
	unsigned int result = 0, b_len;


	if (!b)
		return (0);

	b_len = strlen(b);

	for (i = b_len - 1; i >= 0; i--)
	{
		if (!isdigit(b[i]))
			return (0);

		if (b[i] == '1')
			result += scaler;
		scaler *= 2;
	}

	return (result);
}
