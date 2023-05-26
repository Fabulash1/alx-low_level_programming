#include "main.h"

/**
 * print_diagonal - prints new line
 * @n: parameter
 */

void print_diagonal(int n)
{
	int p = 0;
	int q;

	if (n > 0)
	{
		for (; p < n; p++)
		{
			for (q = 0; q < p; q++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
