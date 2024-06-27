#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: the size of the triangle
 *
 * Description: function that prints a triangle, followed by a new line
 *
 * Return: Nothing
*/

void print_triangle(int size)
{
	int c, i, l;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (c = 1; c <= size; c++)
		{
			for (i = (size - 1); i >= c; i--)
			{
				_putchar(' ');
			}
			for (l = 1; l <= c; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
