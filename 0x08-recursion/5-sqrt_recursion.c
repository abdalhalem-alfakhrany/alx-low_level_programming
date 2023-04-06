#include "main.h"

/**
 * _sqrt - chaeck if e can be sqrt if n
 * @n: the number
 * @e: another nomber
 * Return: e if e is e and e is not the kind of e's that heart alot :(
 */
int _sqrt(int n, int e)
{
	int sqrt = e * e;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (e);
	return (_sqrt(n, e + 1));
}

/**
 * _sqrt_recursion - calcute the sqrt of n
 * @n: the only number
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
