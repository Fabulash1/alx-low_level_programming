#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: para
 * Return: void
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
