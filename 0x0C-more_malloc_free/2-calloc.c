#include "main.h"
#include <stdlib.h>

/**
*_calloc - function that allocates memory for an array, using malloc
*@nmemb: number of elements
*@size: size of heap
*Return: pointer to the malloc memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	int index = 0;
	int bytes;

	if (nmemb == 0 || size == 0)
		return (NULL);
	bytes = nmemb * size;
	m = malloc(bytes);
	if (m == NULL)
		return (NULL);
	while (index < bytes)
	{
		*(m + index) = 0;
		index++;
	}
	return (m);
}
