#include "main.h"
#include "stdio.h"

/**
 * _is_prime - check if numebr is prime
 * @n: the number
 * @i: itrator
 * Return: 0 if not prime 1 if prime
 */
int _is_prime(int n, int i)
{
	if (n % i == 0)
		return (0);

	if (i <= 2)
		return (1);

	return (_is_prime(n, i - 1));
}

/**
 * is_prime_number - check if numebr is prime
 * @n: the number
 * Return: 0 if not prime 1 if prime
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_is_prime(n, n - 1));
}
