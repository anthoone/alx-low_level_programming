#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: int value to check for alphabetic character
 *
 * Return: return 1 if c is a letter, lowercase or uppercase
 *	otherwise Always 0 (Success)
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
