#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max (inclusive)
 * @min: starting integer
 * @max: ending integer
 * Return: pointer to the newly created array, NULL on failure or invalid input
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	if (min > max)
	return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = min++;
	}

	return (ptr);
}
