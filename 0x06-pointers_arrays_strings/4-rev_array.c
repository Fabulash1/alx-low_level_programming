#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: Pointer to array
 * @n: Pointer of elements of an array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, counter;

	n = m - 1;
	counter = 0;
	while (counter <= m)
	{
		temp = a[counter];
		a[counter++] = a[m];
		a[m--] = temp;
	}
}
