#include "main.h"

/**
 * set_bit - set a bit at a given index to 1
 * @n: number of changes
 * @index: index of the bit
 *
 * Return: 1 for Success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
