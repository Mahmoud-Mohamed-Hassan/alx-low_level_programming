#include "main.h"
/**
* print_diagonal - function prints diagonal
* @n: input
*/

void print_diagonal(int n)
{
	int slash, space;

	if (n < 1)
		_putchar('\n');
	for (slash = 1; slash <= n; slash++)
	{
		for (space = 1; space < slash; space++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
}
