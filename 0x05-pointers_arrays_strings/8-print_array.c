#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints elements of arrays of integers
 * @a: Pointer parameter
 * @n: integer variable
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}