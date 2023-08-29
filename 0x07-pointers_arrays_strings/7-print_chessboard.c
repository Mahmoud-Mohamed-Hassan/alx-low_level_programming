#include "main.h"

/**
* print_chessboard - Entry point function
* @a: array
* Return: Always void (Success)
*/

void print_chessboard(char (*a)[8])
{
	int x;
	int j;

	for (x = 0; x < 8; x++)
	{
		for (j = 0; j < 8; j++)
		_putchar(a[x][j]);

	_putchar('\n');
	}
}
