#include "main.h"

/**
 * _pow_recursion - return value to x and to the power y
 * @x: input multiply
 * @y: input times to multiply
 *
 * Return: value multiplied by y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
