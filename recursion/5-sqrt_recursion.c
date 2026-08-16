#include "main.h"

/**
 * sqrt_helper - searches for the natural square root of n by testing values
 * @n: the number to find the square root of
 * @i: the current value being tested
 *
 * Return: the square root of n, or -1 if n has no natural square root
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1 if it does not have one
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 0));
}
