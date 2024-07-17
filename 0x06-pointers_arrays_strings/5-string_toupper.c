#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @str: input string
 *
 * Return: uppercased string
*/

char *string_toupper(char *str)
{
	int i;

	while (str[i++])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}

	return (str);
}
