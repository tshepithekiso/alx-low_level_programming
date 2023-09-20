#include "main.h"

/**
 * string_toupper - change all lowercase letters to a string to uppercase.
 * @str: change string
 * Return: pointer to changed string
 */

char *string_toupper(char *str)

{
	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;
	index++;
	}
	return (str);

}
