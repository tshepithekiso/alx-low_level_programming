#include "main.h"

/**
 * _strcpy - copies input numbers
 * @dest: store the string copy
 * @src: source string
 * @n: max number of bytes copied
 * Return: pointer to resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
	src_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = src_len; index < n; index++)
	dest[index] ='\0';

	return (dest);
}
