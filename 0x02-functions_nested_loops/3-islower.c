#include "main.h"

/**
* _islower - discripe the char is lower of upper case
* @c: the charcter to be checked
* Return: 0 if char c is upper 1 if char c is lower
*/
int _islower(int c)
{
	if (c > 64 && c < 91)
		return (0);
	else if (c > 96 && c < 123)
		return (1);
	return (0);
}
