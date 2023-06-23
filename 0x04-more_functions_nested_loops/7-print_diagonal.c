#include "main.h"
/**
 * void print_diagonal(int n)-to print a diagonal line
 * @c-\
 * Return: void
 */
void print_diagonal(int n)
{
	n = '\\';

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i <= n;)
		{
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
