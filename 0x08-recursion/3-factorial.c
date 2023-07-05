#include "main.h"
/**
 * factorial-this is the main function
 *
 * It prints the factorial of a number
 * @n:the integer whose factorial is to be printed
 * Return: factorial integer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
