#include "calc.h"
/**
 * op_add-this is the main function
 *
 * it provides a sum of two integers
 * @a:the first integer
 * @b:the second integer
 * Return:sum integer
 */
int op_add(int a, int b)
{
	sum = a + b;
	return (sum);
}

/**
 * op_sub-this is the main function
 *
 * it subtracts two numbers
 * @a:the first integer
 * @b:the second integer
 * Return: an integer diff
 */
int op_sub(int a, int b)
{
	diff = a - b;
	return (diff);
}

/**
 * op_mul-this is the main function
 *
 * It multiplies two numbers
 * @a:the first integer
 * @b:the second integer
 * Return: an integer product
 */
int op_mul(int a, int b)
{
	prod = a * b;
	return (prod);
}

/**
 * op_div-this is the main function
 *
 * It divides two numbers
 * @a:the first number
 * @b:the second number
 * Return: integer div
 */
int op_div(int a, int b)
{
	div = a / b;
	return (div);
}

/**
 * op_mod-this is the main function
 *
 * it gives the remainder of a division
 * @a:the first integer
 * @b:the second integer
 * Return: Remainder
 */
int op_mod(int a, int b)
{
	rem = a % b;
	return (rem);
}
