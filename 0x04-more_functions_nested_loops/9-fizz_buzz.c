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
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 == 0)
		printf("FizzBuzz ");
	else if (i % 3 == 0)
		printf("Fizz ");
	else if (i % 5 == 0)
		printf("Buzz ");
	else
		printf("%d ", i);
	}
	printf("\n");
	return (0);
}
