#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - print an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */

void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * print_elem_hex - print an integer, in hexadecimal
 * @elem: the integer to print
 *
 * Return: Nothing.
 */

void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int arr[5] = {0, 98, 402, 1024, 4096};

    array_iterator(arr, 5, &print_elem);
    array_iterator(arr, 5, &print_elem_hex);
    return (0);
}
