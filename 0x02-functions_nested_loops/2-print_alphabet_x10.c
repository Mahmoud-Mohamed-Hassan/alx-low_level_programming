#include "main.h"

/**
 * print_alphabet - utilizes the _putchar function to print
 *                      the alphabet a - z ten times
*/

void print_alphabet_x10(void)
{
	int i, n;

	for (n = 0; n < 10; n++)
	{
	for (i = 65; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	}
}
