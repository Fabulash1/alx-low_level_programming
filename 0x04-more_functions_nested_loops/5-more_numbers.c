#include "main.h"

/**
 * more_numbers - prints even more numbers
 * Return: 0
 */

void more_numbers(void)
{
	int m, n;

	m = 0;

	while (m < 10)
	{
		for (n = 0; n < 15; n++)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + 48);
			}
			_putchar((n % 10) + 48);
		}

		_putchar('\n');

		i++;
	}
}
