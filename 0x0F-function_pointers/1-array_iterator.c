#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - printing each array element on a newl
* @array: array
* @size: how many elem to print
* @action: pointer to print in regular or hex
* Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int x;

	if (array == NULL || action == NULL)
	return;
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
