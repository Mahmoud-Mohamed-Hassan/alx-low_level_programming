#include "main.h"

/**
 * _strncpy - copy  2 in  1
 *
 * @src: int parameter
 * @dest: int parameter
 * @n: int parameter
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n-1 && *src != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
