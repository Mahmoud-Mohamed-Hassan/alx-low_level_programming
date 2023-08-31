#include "main.h"
/**
 * stringLength - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int checkPalindrome(char *s, int start, int end, int mod);
int is_palindrome(char *s);
int stringLength (char *s)
{
	int n = 0;

	if (s > '\0')
		n += stringLength(s + 1) + 1;
	return (n);
}
/**
 * checkPalindrome - checks the characters recursively for palindrome
 * @s: string to check
 * @start: iterator
 * @end: iterator
 * @mod: modulus
 * Return: 1 if palindrome, 0 if not
 */

int checkPalindrome(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod ==0))
		return (1);
	else if (s[start] != s[end])
		return(0);
	else
		return (checkPalindrome(s, start + 1, end - 1, mod));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(char *s)
{
	end = stringLength(s);
	return(checkPalindrome(s, 0, end - 1, end % 2 ));
}
