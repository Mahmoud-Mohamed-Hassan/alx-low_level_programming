#include "main.h"
#include <stdlib.h>

/**
*_strdup - returns a pointer to a newly allocated space in memory
*@str: string to be duplicated
*Return: pointer to a new string which is a duplicate of the string str
*/

char *_strdup(char *str)
{
	char *copy;
	int i, count = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	copy = malloc(sizeof(char) * count + 1);
	if (copy == NULL)
		return (NULL);
	for (i = 0; arr[i] != '\0'; i++)
		copy[i] = arr[i];
	return (copy);
}
