#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
