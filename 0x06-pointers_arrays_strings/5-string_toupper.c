#include "main.h"

/**
 * *string_toupper - change lowercase to upper
 *
 * @n: int parameter
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		n[i] -= 32;
	}
	return (n);
}
