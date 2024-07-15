#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: input string
 *
 * Description: function that prints half of a string
*/

void puts_half(char *str)
{
	char *c;
	int n, len = 0;

	for (c = str; *c != '\0'; c++)
	{
		len++;
	}

	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		c = str + n + 1;
	}
	else
	{
		n = len / 2;
		c = str + n;
	}

	while (*c != '\0')
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
}
