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

	while (*s != '\0')
	{
		while (*ptr != '\0')
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
