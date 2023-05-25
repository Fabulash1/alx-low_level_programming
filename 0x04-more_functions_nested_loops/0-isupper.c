#include "main.h"

/**
 * _isupper - confirms uppercase
 * @c: parameter
 * Return: zero
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
