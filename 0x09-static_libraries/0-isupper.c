#include "main.h"
/**
* _isupper - check is char c upper case or lower case
* @c: char to be checked
* Return: 1 if char c is upper 0 other wise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
