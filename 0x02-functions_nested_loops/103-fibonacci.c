#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints fibonaci even number sum
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum = 0, evenSum = 0;

	while (sum < 4000000)
	{
	sum = fib1 + fib2;
	if ((sum % 2) == 0)
		evenSum += sum;
	fib1 = fib2;
	fib2 = sum;
	}
	printf("%lu\n", evenSum);
	return (0);
}
