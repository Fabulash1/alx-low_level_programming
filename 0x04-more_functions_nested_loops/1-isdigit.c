#include "main.h"

/**
 * _isdigit - shows digits
 * @c: parameter
 * Return: one or zero
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
