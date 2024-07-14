#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: input string
 *
 * Description: function that reverses a string
*/

void rev_string(char *s)
{
	char *P1, *P2, temp;

	P2 = s;
	while (*P2)
		P2++;

	for (P1 = s, P2 = P2 - 1; P1 < P2; P1++, P2--)
	{
		temp = *P1;
		*P1 = *P2;
		*P2 = temp;
	}
}
