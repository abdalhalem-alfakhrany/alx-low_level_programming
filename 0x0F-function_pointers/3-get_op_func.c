#include "3-calc.h"

/**
 * get_op_func - geting the corrosponding operation to the string s
 * @s: operation string
 * Return: function pointer to the operation if Success NULL if failer
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
	int i = 0;

	while (s[0] != ops[i].op[0])
		i++;

	return (ops[i].f);
}
