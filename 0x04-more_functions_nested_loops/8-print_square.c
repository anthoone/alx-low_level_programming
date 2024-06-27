#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: is the size of the square
 *
 * Description: function that prints a square using '#'
 *
 * Return: Nothing
*/

void print_square(int size)
{
	int l, c;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (l = 0; l < size; l++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
