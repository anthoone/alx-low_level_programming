#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: input string
 *
 * Description: function that prints every other character of a string
*/

void puts2(char *str)
{
	char *P;

	P = str;
	do {
		_putchar(*P);
		P += 2;
	} while (*P != '\0' && *(P - 1) != '\0');
	_putchar('\n');
}
