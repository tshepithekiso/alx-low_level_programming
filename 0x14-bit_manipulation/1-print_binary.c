#include "main.h"

/**
 * print_binary -  prints the binary representation of a number
 * @n: number of binary printed
 *
 * Return: void)
 */

void print_binary(unsigned long int n)
{
	unsigned long int current;
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
