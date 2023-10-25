#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 * @n: int
 * @val: square root
 * Return: int
 */
int square(int n, int val);

int _sqrt_recursion(int n)

{
	return (square(n, 1));
}

/**
 * square - Finds the square root recursively.
 * @n: Integer to find the square root of.
 * @val: Current value being checked for square root.
 * Return: The square root of n if it exists, -1 otherwise.
 */

int square(int n, int val)
{
if (val * val == n)
	return (val);
else if (val * val < n)
	return (square(n, val + 1));
else
	return (-1);
}
