#include "main.h"
/**
* print_diagonal - function prints diagonal
* @n: input
*/

void print_diagonal(int n)
{
	int slash, space;

	for (slash = 1; slash <= n; slash++)
	{
		for (space = 1; space < slash; space++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
