#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: finds and prints the largest prime factor of a number
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long int count, largest_prime, num = 612852475143;

	while (num % 2 == 0)
	{
		largest_prime = 2;
		num /= 2;
	}
	for (count = 3; count * count <= num; count += 2)
	{
		while (num % count == 0)
		{
			largest_prime = count;
			num /= count;
		}
	}

	if (num > 2)
		largest_prime = num;

	printf("%lu\n", largest_prime);

	return (0);
}
