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
	int lastDigit;

	if (num < 0)
		lastDigit = -1 * (num % 10);
	else
		lastDigit = num % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
