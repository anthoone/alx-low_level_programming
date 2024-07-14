#include <stdio.h>

/**
 * swap_int - swap the values of two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Description: a function that swaps the values of two integers.
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
