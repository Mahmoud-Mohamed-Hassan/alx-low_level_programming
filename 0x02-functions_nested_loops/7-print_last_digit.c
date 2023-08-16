#include "main.h"

/**
 * print_last_digit - function to print last digit
 *
 * @n: check input of function
 *
 * Return: return 0 (success)
*/

int print_last_digit(int n)
{
	int l;

	if (n < 0)
		l = (-1) * (n % 10);
	else
		l = n % 10;

	_putchar(l + '0');
	return (l);
}
