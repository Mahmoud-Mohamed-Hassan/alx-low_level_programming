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

	while (i < n && *src != '\0')
	{
		dest[i] = src[i];
		i++
	}
	dest[n] = '\0';
	return (dest);
}
