#include "main.h"

/**
 * print_triangle - creates a triangle
 * @size: param
 * Return: zero
 */

void print_triangle(int size)
{
	int r = 0, s, n = size - 1;

	if (size > 0)
	{
		for (; r < size; r++)
		{
			for (s = 0; s < size; s++)
			{
				if (s < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
