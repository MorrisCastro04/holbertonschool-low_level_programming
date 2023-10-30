#include "main.h"
int prime(int n, int i);
/**
 * is_prime_number - 1 if n is prime, otherwise 0
 * @n: the number
 * Return: 1 or 0 depending if is prime or not
 */
int is_prime_number(int n)
{
	return (prime(2, n));
}
/**
 * prime - return value if prime or not
 * @i: the base
 * @n: the number
 * Return: 0 not prime, 1 prime
 */
int prime(int i, int n)
{
	if (n < 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (0);
	}
	else if (n % i != 0)
	{
		return (prime(i - 1, n));
	}
	else if (n % i == 0 && i > 1)
	{
		return (0);
	}
	else
		return (1);
}
