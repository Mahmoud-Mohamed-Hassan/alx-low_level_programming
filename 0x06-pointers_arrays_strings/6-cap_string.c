#include "main.h"

/**
 * *string_toupper - change lowercase to upper
 *
 * @n: int parameter
 *
 * Return: n
 */
char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (i == 0 || n[i] = ' ' )
		{
			if (n[i+1] >= 'a' && n[i+1] <= 'z')
			n[i+1] -= 32;
		}
	}
	return (n);
}
