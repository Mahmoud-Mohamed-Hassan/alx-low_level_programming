#include <stdio.h>
#include "main.h"

/**
* main - prints the name of the program
* @argc: number of argument
* @argv: array of argument
*
* Return: Always 0 (Success)
*/

int main(int argc attribute_((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
