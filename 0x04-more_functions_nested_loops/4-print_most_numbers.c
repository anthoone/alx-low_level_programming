#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9 without 2 && 4
 *
 * Description: unction that prints the numbers, from 0 to 9 & not print 2 & 4
 *
 * Return: Nothing
*/

void print_most_numbers(void)
{
	int c = 48;

	while (c <= 57)
	{
		if (c != 50 && c != 52)
			_putchar(c);

		c++;
	}
	_putchar('\n');
}
