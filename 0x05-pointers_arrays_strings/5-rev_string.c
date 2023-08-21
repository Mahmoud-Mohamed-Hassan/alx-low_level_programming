#include "main.h"

/**
 * rev_string - print string revert and new line
 *
 * @s: int parameter
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (length--; length >= 0; length--)
		_putchar(s[length]);
	_putchar('\n');
}
