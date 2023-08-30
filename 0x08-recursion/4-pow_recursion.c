#include "main.h"

/**
* _pow_recursion -  that returns the value of x raised to the power of y
*@x: input base
*@y: input power
* Description : y = 0 will return (1)
*		y below 0 will return (-1)
*Return: the powered x to y
*/

int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}
