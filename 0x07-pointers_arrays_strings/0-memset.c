#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: start address of memory to be filled
 * @b: the desired value
 * @n: number of byte to be changed
 * Return: chang array witha new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
