#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 *
 * Description: function that concatenates two strings.
 *
 * Return: return a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	char *P2 = dest;

	while (*P2)
	{
		P2++;
	}

	for (; *src; P2++, src++)
	{
		*P2 = *src;
	}

	return (dest);
}
