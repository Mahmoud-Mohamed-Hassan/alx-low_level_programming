#include "main.h"

/**
 * reset_to_98 - takes a pointer to int as parameter and
 * update it's value to 98
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
