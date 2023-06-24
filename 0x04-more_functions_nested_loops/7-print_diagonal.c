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
		int j;
		{
			for (j = 0; j <= n; j++)
			{
				_putchar('\\');
			}
			_putchar('\n');
		}
	}
}
