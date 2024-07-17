#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Description: function that compares two strings.
 *
 * Return:
 *	return zero if s1 == s2
 *	return negative number if s1 < s2
 *	return positive number if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	for (; *s1 && *s2; s1++, s2++)
	{
		if (*s1 != *s2)
			break;
	}

	return ((*s1 - '0') - (*s2 - '0'));
}
