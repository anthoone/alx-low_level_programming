#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: destination string
 * @src: source string
 * @n: Maximum number of characters to be copied from src to dest
 *
 * Description: function that copies a string.
 *
 * Return: return a pointer to the resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *P2 = dest;

	for (; n > 0 && *src; n--, P2++, src++)
	{
		*P2 = *src;
	}

	for (; n > 0; n--, P2++)
	{
		*P2 = '\0';
	}

	return (dest);
}
