#include "main.h"
#include <stdlib.h>
/**
* create_array - create array of size size and assign char c
* @size: size of array
* @c: char
* Return: pointer to array, NULL if fail
*
*/
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
	return (NULL);
		while (size--)
			arr[size] = c;
		return (arr);
}
