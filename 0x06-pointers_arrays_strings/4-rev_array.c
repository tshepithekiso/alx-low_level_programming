#include "main.h"

/**
 * reverse_array - reverse an array of an integers
 * @a: array integers to be reversed
 * @n: number of arrays
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
	tmp = a[n - 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = tmp;
	}
}

