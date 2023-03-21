#include "main.h"

/**
* _isalpha - discripe the char is alphabet or other wise
* @c: the charcter to be checked
* Return: 0 if char c is alphabet 1 other wise
*/
int _isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else if (c > 96 && c < 123)
		return (1);
	return (0);
}
