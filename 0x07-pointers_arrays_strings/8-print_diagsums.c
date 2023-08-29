#include "main.h"
#include <stdio.h>

/**
* print_diagsums - Entry point
* @a: input
* @size: input
* Return: Always void (Success)
*/

void print_diagsums(int *a, int size)
{
	int summ1 = 0, summ2 = 0, y;

	for (y = 0; y < size; y++)
	{
	summ1 = summ1 + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
	summ2 += a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", summ1, summ2);
}
