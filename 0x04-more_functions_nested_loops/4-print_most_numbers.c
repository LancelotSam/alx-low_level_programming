#include "main.h"
/**
 * void print_most_numbers-print numbers apart from 2 & 4
 * @c: 0-9
 *
 * Return: (Void)
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
			_putchar(c);
	}
	{
		_putchar('\n');
	}
}
