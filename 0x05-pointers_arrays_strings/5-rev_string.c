#include "main.h"

/**
 * rev_string - print string revert and new line
 *
 * @s: int parameter
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int length = 0, temp, i;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
