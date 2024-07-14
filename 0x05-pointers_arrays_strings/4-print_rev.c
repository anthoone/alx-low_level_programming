#include "main.h"

/**
 * print_rev -  prints a string, in reverse
 *
 * @s: adress of first element of string
 *
 * Description: function that prints a string, in reverse
*/

void print_rev(char *s)
{
	char *c = s;

	while (*c != '\0')
		c++;

	for (; c >= &s[0]; c--)
		_putchar(*c);

	_putchar('\n');
}
