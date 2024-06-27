#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Description: function that prints 10 times the numbers, from 0 to 14
 *
 * Return: Nothing
*/

void more_numbers(void)
{
	int c, l, num;

	for (c = 0; c < 10; c++)
	{
		for (l = 0; l <= 14; l++)
		{
			num = l;
			if (l > 9)
			{
				_putchar(1 + 48);
				num = l % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
