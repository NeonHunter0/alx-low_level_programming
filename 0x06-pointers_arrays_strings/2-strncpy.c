#include "main.h"

/**
 * _strncpy - A function that copies a string.
 *
 * @dest: pointer to destination inpur buffer
 * @src: pointer to source input buffer
 * @n: bytes of @src
 *
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	for (j < n && src[j] != '\0')
	{
		dest[i] = src[i];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (deset);
}
