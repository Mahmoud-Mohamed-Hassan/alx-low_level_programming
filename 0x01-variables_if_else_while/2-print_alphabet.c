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
	for (int i = 97; i <= 122; i++)
	{
		putchar(i);
		putchar(10);
	}
	return (0);
}
