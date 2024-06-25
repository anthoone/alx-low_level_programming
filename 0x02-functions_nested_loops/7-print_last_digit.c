#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @num: our number
 *
 * Description: create a function that prints the last digit of a number
 *
 * Return: the value of the last digit @num
*/

int print_last_digit(int num)
{
	if (num < 0)
	{
		num = num * -1;
		_putchar((num % 10) + '0');
		return (num % 10);
	}
	else
	{
		_putchar((num % 10) + '0');
		return (num % 10);
	}
}
