#include "main.h"
/**
 * print_line - this is the main function
 *
 * To draw a straight line on the terminal
 * @n: the character to be printed
 * Return: print line
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
		int j;
		
		for (j = 1; j <= n; j++)
		{
				_putchar('_');
		}
		_putchar('\n');
	}
}
