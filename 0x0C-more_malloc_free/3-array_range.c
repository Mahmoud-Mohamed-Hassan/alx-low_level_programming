#include "main.h"
#include <stdlib.h>

/**
*array_range - function that creates an array of integers
*@min: number of elements
*@max: size of heap
*Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *m;
	int i, length;

	if (min > max)
	{
		return (NULL);
	}
	length = (max - min) + 1;
	m = malloc(sizeof(int) * length);
	if (!m)
		return (NULL);
	while (min <= max)
	{
		m[i] = min;
		i++;
		min++;
	}
	return (m);
}

