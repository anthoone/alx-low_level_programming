#include <stdio.h>

/**
 * _strlen -  returns the length of a string.
 *
 * @s: pointer of a string
 *
 * Description: function that returns the length of a string.
 *
 * Return: returns the length of the string.
*/

int _strlen(char *s)
{
	char *c;
	int len = 0;

	for (c = s; *c != '\0'; c++)
	{
		len++;
	}

	return (len);
}
