#include "main.h"
/**
 * void print_square-to print a square
 * @c-#
 * Return-void
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i ,j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
		}
	}
}
