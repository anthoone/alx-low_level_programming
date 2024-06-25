#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: number that we computes the absolute value
 *
 * Description: creating a _abs function
 *
 * Return: Always 0 (Success)
*/

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
