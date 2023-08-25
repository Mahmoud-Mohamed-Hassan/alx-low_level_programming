#include "main.h"

/**
 * *rot13 - encode string with rot13
 *
 * @s: int parameter
 *
 * Return: s
 */
char *rot13(char *s)
{
	int i, j;
	char *a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *b = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				si[i] = b[j];
				break;
			}
		}
	}
	return (s);
}
