#include "main.h"
int findSquare(int n, int x);

/**
* _sqrt_recursion -  that returns the value of square n
*@n: number
* Description : n < 0  return (-1) , return (square of n)
*Return: the powered x
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (findSquare(n, 0));
}
/**
* findSquare - recurses to find the natural
* square root of a number given
* @n: number to calculate the sqaure root of
* @x: iterator
*
* Return: the resulting square root
*/
int findSquare(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (findSquare(n, x + 1));

}
