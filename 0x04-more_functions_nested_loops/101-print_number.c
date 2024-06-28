#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: integer input
 *
 * Description: function that prints an integer
 *
 * Return: Nothing
*/

void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	if ((n / 10) > 0)
		print_number(n / 10);

	_putchar((n % 10) + 48);
}
