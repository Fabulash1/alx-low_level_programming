#include "main.h"

/**
 * _islower - checks if a char is lowercase, if YES it returns 1
 * otherwise returns null just like islower() function in ctype.h
 *
 * @c: Is the int value to be compared with the ASCII value
 *
 * Return: 0 if it works out.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
