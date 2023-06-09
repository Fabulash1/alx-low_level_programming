#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: param
 * Return: null or 1
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
