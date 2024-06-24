#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char word[] = "_putchar";

	for (i = 0; i <= 8; i++)
	{
		if (word[i] != '\0')
		{
			_putchar(word[i]);
		}
	}
	_putchar('\n');

	return (0);
}
