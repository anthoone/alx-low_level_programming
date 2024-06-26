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
	unsigned int num = n;

	if (n < 0)
	{
		num *= -1;
		_putchar('-');
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + 48);
}
