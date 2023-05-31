#include "main.h"
/**
 * reverse_array - reverse arrays
 *
 * @a: Pointer to array
 * @n: Pointer of elements of an array
 *
 * Return: null
 */
void reverse_array(int *a, int n)
{
	int temp, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}
}
