#include "3-calc.h"
/**
 * get_op_func - a func that gets operator function
 * @s: operator
 * Return: result
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int x;

	x = 0;
	while (x < 5)
	{
		if (strcmp(ops[x].op, s) == 0)
			return (ops[x].f);
		x++;
	}
	return (NULL);
}
