#include "main.h"

/**
* factorial - function that returns the factorial of number
* @n: input parameter
* Description : 0 returns (1) , below 0 will return (-1)
*Return: factorial of number
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
