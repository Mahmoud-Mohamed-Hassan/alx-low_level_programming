#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @x: character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */

static int _islower(int x)
{
	return (x >= 'a' && x <= 'z');
}

/**
 * _isseparator - checks if a character is a separator or not
 * @x: character to check
 * Return: 1 if c is a separator, 0 otherwise
 */

static int _isseparator(char x)
{
	return (x == ' ' || x == '\t' || x == '\n' ||
			x == ',' || x == ';' || x == '.' ||
			x == '!' || x == '?' || x == '"' ||
			x == '(' || x == ')' || x == '{' ||
			x == '}');
}

/**
 * cap_string - capitalizes all words of a string
 * @n: string to capitalize
 * Return: pointer to string n
 */
char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i]; ++i)
		if (i == 0 || _isseparator(n[i - 1]))
			(_islower(n[i])) ? n[i] -= 32 : 0;
	return (n);
}
