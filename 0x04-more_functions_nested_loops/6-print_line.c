#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: n is the number of times the character '_' should be printed
 *
 * Description: function that draws a straight line in the terminal
 *
 * Return: Nothing
*/

void print_line(int n)
{
	int c;

	if (n <= 0)
		_putchar('\n');
	for (c = 0; c < n; c++)
	{
		_putchar(95);
		if (c == (n - 1))
			_putchar('\n');
	}
}
