#include "variadic_functions.h"


/**
 * print_strings - string to be printed
 * @separator: string to be printed between strings
 * @n: number of strings
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);


			if (index != (n - 1) && separator != NULL)
				printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}

