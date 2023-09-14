#include <stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints numbers, followed by a new line.
 * @format: is a list of types of arguments passed to the function
 * Return: print all
*/

void print_all(const char * const format, ...)
{
	int x = 0;
	char *ptr;
	char *sptr;
	va_list list;

	va_start(list, format);
	while (format && format[x])
	{
		sptr = "";
		if (format[x + 1] != '\0')
			sptr = ", ";
		switch (format[x])
		{
		case 'c':
			printf("%c%s", va_arg(list, int), sptr);
			break;
		case 'i':
			printf("%d%s", va_arg(list, int), sptr);
			break;
		case 'f':
			printf("%f%s", va_arg(list, double), sptr);
			break;
		case 's':
			ptr = va_arg(list, char*);
			if (!ptr)
				ptr = "(nil)";
			printf("%s%s", ptr, sptr);
			break;
		}
		x++;
	}
	printf("\n");
	va_end(list);
}
