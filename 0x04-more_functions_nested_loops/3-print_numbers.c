#include "main.h"
/**
 * Main-entry point
 * void print_numbers- prints numbers 0-9
 * @c: 0-9
 *
 * Return: On success 0.
 */
void print_numbers(void)/*calling function from main*/
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	{
		_putchar('\n');
	}
}
