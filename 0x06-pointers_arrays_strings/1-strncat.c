#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination string
 * @src : source string
 * @n: nomber of bytes that will be used from src
 *
 * Description: function that concatenates two strings.
 *
 * Return: return a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	char *P2 = dest;

	while (*P2)
	{
		P2++;
	}

	for (; n > 0 && *src != '\0'; n--, P2++, src++)
	{
		*P2 = *src;
	}

	return (dest);
}
