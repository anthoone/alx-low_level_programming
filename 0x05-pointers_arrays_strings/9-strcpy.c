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
	char *P2 = dest;

	while (*src != '\0')
	{
		*P2 = *src;
		src++;
		P2++;
	}
	*P2 = '\0';

	return (dest);
}
