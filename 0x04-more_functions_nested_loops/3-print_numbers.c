#include "main.h"
/**
 * print_numbers - from 0 up to 9
 *
 * Return: anything u want 1 or 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
