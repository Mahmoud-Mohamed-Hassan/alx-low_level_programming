#include "main.h"

/**
 * _puts - print string and new line
 *
 * @str: int parameter
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
