#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with putchar function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 122; i <= 97; i--)
	{
		putchar(i);
	}

	putchar(10);
	return (0);
}
