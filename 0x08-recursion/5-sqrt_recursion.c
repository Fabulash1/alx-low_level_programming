#include "main.h"

/**
 * helper - Finds the square root of two numbers
 * @p: The number
 * @q: The number to test for the square root of @a
 * Return: square root
 */

int helper(int p, int q)
{
	if (q * q > p)
		return (-1);

	else if (q * q == p)
		return (q);

	else
		return (helper(p, q + 1));

	return (1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to return the square root of
 * Return: square root of @n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (helper(n, 1));
}
