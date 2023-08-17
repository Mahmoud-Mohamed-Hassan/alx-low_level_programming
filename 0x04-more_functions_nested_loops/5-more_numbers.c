#include "main.h"

/**
 * more_numbers - utilizes the _putchar function to print
 *                      the numbers from 0 to 14
*/

void more_numbers(void)
{
	int n, i;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar(n / 10 + 48);
				_putchar(n % 10 + 48);
			}
			else
				_putchar(n + 48);
		}
		_putchar('\n');
	}
}
