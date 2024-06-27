#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: the number of times the character \ should be printed
 *
 * Description: function that draws a diagonal line on the terminal
 *
 * Return: Nothing
*/

void print_diagonal(int n)
{
	int c, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (c = 0; c < n; c++)
		{
			for (i = 1; i <= c; i++)
			{
				_putchar(' ');
			}

			_putchar(92);
			_putchar('\n');
		}
	}
}
