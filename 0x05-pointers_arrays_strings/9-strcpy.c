#include "main.h"

/**
 * _strcpy - copies a string
 *
 * @dest: destination to copy the string
 * @src: original string that will be copied
 *
 * Description: function that copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * Return: return the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	char *P1, *P2;

	for (P1 = src, P2 = dest; *P1 != '\0'; P1++, P2++)
	{
		*P2 = *P1;
	}

	return (dest);
}
