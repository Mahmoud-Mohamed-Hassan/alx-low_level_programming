#include "main.h"

/**
 * print_sign - function to check if charcter is lowercase
 *
 * @n: check input of function
 *
 * Return: return 1 if 'n' is more than 0,
 * -1 if less, otherwise always 0 (success)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
