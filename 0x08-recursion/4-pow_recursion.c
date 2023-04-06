#include "main.h"

/**
 * _pow_recursion - calcute the power y of x recursvly
 * @x: base
 * @y: exponent
 * Return: x*y
 */
int _pow_recursion(int x, int y)
{
	if (x == 0)
		return (0);
	if (x == 1)
		return (1);
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
