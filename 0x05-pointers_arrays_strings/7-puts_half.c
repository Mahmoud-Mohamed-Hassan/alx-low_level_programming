#include "main.h"

/**
 * puts_half - print half string
 *
 * @s: int parameter
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int length = 0, temp, i;

	while (str[length] != '\0')
	{
		length++;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i >= length / 2 )
		_putchar(str[i]);
	}
	_putchar('\n');
}
