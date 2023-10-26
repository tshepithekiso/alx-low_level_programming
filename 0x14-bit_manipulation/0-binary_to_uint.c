#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - a function that converts a binary number
 * @b: pointer to a string containing aa binary number
 *
 * Return:  the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = (result << 1) | (b[i] - '0');
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (result);
}
