#include "main.h"

/**
 * more_numbers - utilizes the _putchar function to print
 *                      the numbers from 0 to 14
*/

void more_numbers(void)
{
	int n, i, count;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			count = n;
			if (n >= 10)
			{
				_putchar(n / 10 + 48);
				count = n % 10;
			}
				_putchar(count + 48);
		}
		_putchar('\n');
	}
}
