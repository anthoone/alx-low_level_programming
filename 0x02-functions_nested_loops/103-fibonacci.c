#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: finds and prints the sum of the even-valued terms
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long first = 1, second = 2, sum = 2, next;

	while (1)
	{
		next = first + second;
		if (next > 4000000)
			break;
		if (next % 2 == 0)
			sum += next;

		first = second;
		second = next;
	}
	printf("%lu\n", sum);

	return (0);
}
