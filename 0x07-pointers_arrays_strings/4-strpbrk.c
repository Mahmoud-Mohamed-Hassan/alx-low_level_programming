#include "main.h"

/**
* _strpbrk - Entry point function
* @s: input
* @accept: input parameter
* Return: s or NULL (Success)
*/

char *_strpbrk(char *s, char *accept)
{
	const char *ptr = accept;

	while (*s)
	{
		while (*ptr)
		{
			if (*s == *ptr)
			{
				return (s);
			}
			ptr++;
		}
		s++;
	}
	return (NULL);
}
