#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints numbers with putchar function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1 = 0, num2;

	while (num1 <= 99)
	{
		num2 = num1;
		while (num2 <= 99)
		{
			if (num1 != num2)
			{
				putchar((num1 / 10) + 48);
				putchar((num1 % 10) + 48);
				putchar(32);
				putchar((num2 / 10) + 48);
				putchar((num2 % 10) + 48);
				if (num1 != 99 || num2 != 99)
				{
				putchar(',');
				putchar(32);
				}
			}
			num2++;
		}
		num1++;
	}

	putchar(10);
	return (0);
}
