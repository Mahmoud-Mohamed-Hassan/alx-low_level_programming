#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with putchar function no q or o
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 113 || i == 101)
		continue;
		putchar(i);
	}
	putchar(10);
	return (0);
}
