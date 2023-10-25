#include "main.h"

/**
 * _pow_recursion - calculates x raised tp power of y recursively
 * @x: base
 * @y: rxposant
 * Return: x^y, -1 if y is negative
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));

}
