#include "main.h"
/**
 * print_diagonal-this is the main function
 *
 * To print a diagonal line
 * @n: the character to br printed
 * Return: diagonal line
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
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			{
				_putchar('\n');
			}
		}
	}
}
