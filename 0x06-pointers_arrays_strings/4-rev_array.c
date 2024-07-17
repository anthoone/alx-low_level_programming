#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: integer array
 * @n: number of elements
*/

void reverse_array(int *a, int n)
{
	int *P = &a[n - 1], temp;

	for (; a < P; a++, P--)
	{
		temp = *a;
		*a = *P;
		*P = temp;
	}
}
