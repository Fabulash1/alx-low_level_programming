#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first int
 * @b: second int
 * @c: third int
 * Return: largest number
 */

int largest_number(int m, int n, int o)
{
	int largest;

	if (m >= n && m >= o)
	{
		largest = m;
	}
	else if (n >= m && n >= o)
	{
		largest = n;
	}
	else
	{
		largest = o;
	}
	return (largest);
}
