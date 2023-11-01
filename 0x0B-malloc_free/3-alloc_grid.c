#include "main.h"
#include <stdlib.h>

/**
*alloc_grid - function that returns a pointer to a 2
*dimensional array of integers.
*@height: the First D equals to rows
*@width: the second D equals to columns
*Return: pointer of an array of integers
*/

int **alloc_grid(int width, int height)
{
	int **outputArr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	outputArr = malloc(sizeof(int *) * height);
	if (outputArr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		outputArr[i] = malloc(sizeof(int) * width);
		if (outputArr[i] == NULL)
		{
			free(outputArr);
			for (j = 0; j <= height; j++)
				free(outputArr[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			outputArr[i][j] = 0;
	}
	return (outputArr);

}
