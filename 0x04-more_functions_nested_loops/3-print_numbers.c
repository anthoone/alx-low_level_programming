#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Description: function that prints the numbers, from 0 to 9
 *
 * Return: Nothing
*/

void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
