#include "main.h"
/**
 *print_times_table - print time table of n
 *
 * @n: input of function
*/
void print_times_table(int n)
{
	int pr, mul, number;

	if (n <= 15 && n >= 0)
	{
		for (number = 0; number <= n; number++)
		{
			_putchar(48);
		for (mul = 1; mul <= n; mul++)
			{
			_putchar(',');
			_putchar(' ');

			pr = number * mul;
			if (pr <= 9)
				_putchar(' ');
			if (pr <= 99)
				_putchar(' ');
			if (pr >= 100)
			{
				_putchar((pr / 100) + 48);
				_putchar ((pr / 10) % 10 + 48);
			} else if (pr <= 99 && pr >= 10)
				_putchar((pr / 10) + 48);
			_putchar(pr % 10 + 48);
			}
		_putchar('\n');
		}
	}
}
