#include "function_pointers.h"

/**
 * array_iterator - function parameter
 * @array: integers
 * @size: value
 * @action: pointer of a function
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (c < size)
		{
			action(array[c]);
			c++;
		}
	}
}
