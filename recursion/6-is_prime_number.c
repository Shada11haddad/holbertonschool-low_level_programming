#include "main.h"

/**
 * prime_helper - checks if n is divisible by any number starting from i
 * @n: the number to check
 * @i: the current divisor being tested
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);

	return (prime_helper(n, i + 1));
}

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: the number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (prime_helper(n, 2));
}
