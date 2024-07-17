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

	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		for (j = 0; sep[j]; j++)
		{
			if (str[i] == sep[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
				break;
			}
		}
		i++;
	}

	return (str);
}
