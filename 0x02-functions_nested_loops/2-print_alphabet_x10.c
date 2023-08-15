#include "main.h"

/**
 * print_alphabet_x10 - utilizes the _putchar function to print
 *                      the alphabet a - z ten times
*/

void print_alphabet_x10(void)
{
	int i, n;

	for (n = 0; n < 10; n++)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	}
}
