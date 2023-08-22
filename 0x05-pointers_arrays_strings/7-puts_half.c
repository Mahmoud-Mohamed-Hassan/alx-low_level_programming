#include "main.h"

/**
 * puts_half - print half string
 *
 * @str: int parameter
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int length = 0, i, half;

	while (str[length] != '\0')
	{
		length++;
	}
	half = (length - 1) / 2;
	for (i = half + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
