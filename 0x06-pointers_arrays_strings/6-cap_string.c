#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @str: input string
 *
 * Return: the capitalized str
*/

char *cap_string(char *str)
{
	int j, i = 0;
	char *sep = ",;.?!\"(){} \n\t";

	while (str[i++])
	{
		for (j = 0; sep[j]; j++)
		{
			if (str[i] == sep[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
					break;
				}
			}
		}
	}

	return (str);
}
