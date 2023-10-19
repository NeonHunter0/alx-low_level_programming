#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: the string to be capitalized.
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int index = 0;
	int capitalize = 1;

	while (str[index])
	{
		if ((str[index] >= 'a' && str[index] <= 'z') && capitalize)
		{
			str[index] -= 32;
			capitalize = 0;
		}
		else if (str[index] == ' ' || str[index] == '\t' || str[index] == '\n' ||
			str[index] == ',' || str[index] == ';' || str[index] == '.' ||
			str[index] == '!' || str[index] == '?' || str[index] == '"' ||
			str[index] == '(' || str[index] == ')' || str[index] == '{' ||
			str[index] == '}')
		{
		capitalize = 1;
		}

		index++;
	}
	return str;
}
