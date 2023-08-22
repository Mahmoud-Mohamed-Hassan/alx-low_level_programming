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
	int length = 0, i;

	while (str[length] != '\0')
	{
		length++;
	}
	for (i = length / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	}
	_putchar('\n');
}
