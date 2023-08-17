#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints fibonaci numbers 50 lines
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int  count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
	sum = fib1 + fib2;
	fib1 = fib2;
	fib2 = sum;
	printf("%lu", sum);
	if (count == 49)
	printf("\n");
	else
	printf(", ");
	}
	return (0);
}
