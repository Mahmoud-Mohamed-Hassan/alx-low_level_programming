#include "main.h"
/**
 * main - Entry point
 *
 * Description: sum of multiples of 3 or 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0, number;

	for (number = 0; number <= 1024; number++)
	{
		if ((number % 5 == 0) || (number % 3 == 0))
			sum += number;
	}
				if (sum <= 9)
				_putchar(number);
			if (sum <= 99)
				_putchar(number);
			if (sum >= 100)
			{
				_putchar((sum / 100) + 48);
				_putchar ((sum / 10) % 10 + 48);
			} else if (sum <= 99 && sum >= 10)
				_putchar((sum / 10) + 48);
			_putchar((sum % 10) + 48);
			_putchar('\n');
		return (0);
}
