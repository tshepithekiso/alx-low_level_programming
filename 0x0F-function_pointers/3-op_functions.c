#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - addition
 * @a:value of A
 * @b: value of B
 *
 * Return: Nothing
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: value
 * @b: value
 *
 * Return: Nothing
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 * @a: value
 * @b: value
 *
 * Return: Nothing
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: value
 * @b: value
 *
 * Return: Nothing
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - remainder of division
 * @a: value
 * @b: value
 *
 * Return: Nothing
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}

	return (a % b);
}
