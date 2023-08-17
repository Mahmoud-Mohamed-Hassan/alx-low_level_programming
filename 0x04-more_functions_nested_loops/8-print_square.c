#include "main.h"
/**
* print_square - function prints line
* @size: input
*/

void print_square(int size)
{
	int row, col;

	if (size < 1)
		_putchar('\n');

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
