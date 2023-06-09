#include "main.h"

/**
 *_puts_recursion - prints a string then a new line
 *@s: pointer block of memory to fill
 *Return: 0 (null)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar (*s);
	_puts_recursion(s + 1);
}
