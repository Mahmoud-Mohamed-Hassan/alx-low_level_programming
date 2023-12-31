#include <stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @n: last fixed argument in the variadic function
 * @separator: the string to be printed between numbers
 * Return: printed numbers
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list list;

	va_start(list, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(list, int));
		if (x < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
