#include "calc.h"
/**
 * (*get_op_func-this is the main function
 *
 * It gets the desired function to perform operation
 * @s:the input operator
 * @int:user input
 * Return: integer result
 */
int (*get_op_func(char *s))(int, int)
{
	/*printf("Please input operation:\n");
	  if (scanf("%c", &s) != (+, -, *, /, %))
	  return (NULL);*/
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	i = 0;
	while (ops[i].op != '\0' && *s == ops[i].op)
	{
		return (ops[i].f);
		i++;
	}
	return (NULL);
}
