#include "3-calc.h"

/**
 * main - main function
 * @argv: vector array
 * @argc: length
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int first_op, second_op;
	int (*operationx)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	first_op = atoi(argv[1]);
	second_op = atoi(argv[3]);
	operationx = get_op_func(argv[2]);
	if (!operationx)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operationx(first_op, second_op));
	return (0);
}
