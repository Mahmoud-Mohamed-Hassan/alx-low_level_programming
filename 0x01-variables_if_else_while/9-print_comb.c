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
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i < 57)
		{
		putchar(44);
		putchar(32);
		}
	}

	putchar(10);
	return (0);
}
