#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
*string_nconcat - function that concatenates two strings.
*@s1: string one
*@s2: string two
*@n: size of malloc memory
*Return: pointer to the malloc memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int lenS1;
	unsigned int lenS2;
	unsigned int x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lenS1 = strlen(s1);
	lenS2 = strlen(s2);

	if (n > lenS2)
		n = lenS2;
	m = malloc(lenS1 + n + 1);

	if (m == NULL)
		return (NULL);

	for (x = 0; x < (lenS1 + n); x++)
	{
		if (x < lenS1)
		{
			t[x] = s1[x];
		}
		else
		{
			t[x] = s2[x - lenS1];
		}
	}
	*(m + x) = '\0';
	return (m);
}
