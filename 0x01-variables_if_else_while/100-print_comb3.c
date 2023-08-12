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

	while (num1 <= 9)
	{
		num2 = 0;
		while (num2 <= 9)
		{
			if (num1 != num2 && num1 < num2)
			{
				putchar(num1 + 48);
				putchar(num2 + 48);
				if (num1 != 8)
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
