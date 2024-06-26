#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
*/

int _putchar(char);

int main(void)
{
	int i;
	unsigned long first = 1, second = 2, next;

	printf("%lu, %lu", first, second);

	for (i = 2; i < 50; i++)
	{
		next = first + second;
		first = second;
		second = next;
		printf(", %lu", next);
	}
	printf("\n");

	return (0);
}
