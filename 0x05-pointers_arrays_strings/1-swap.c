#include "main.h"

/**
 * swap_int - takes a pointer to int as parameter and
 * swap
 *
 * @a: int parameter
 * @b: int parameter
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
