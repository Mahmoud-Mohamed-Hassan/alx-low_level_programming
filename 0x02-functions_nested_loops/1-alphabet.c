#include "main.h"

/**
 * print_alphabet function
 *
 * Description: A C program that prints with _putchar function
 *
 * Return: no return
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);

	_putchar('\n');
}
