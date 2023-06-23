#include "main.h"
/**
 * void print_line(int n)-to draw a straight line on the terminal
 * @c- n, _
 * Return: void
 */
void print_line(int n)
{
	n = '_';

	if (n <= '0')
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar(n);
		}
	}

}
