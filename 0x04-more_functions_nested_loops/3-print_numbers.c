#include "main.h"
/**
 *print_numbers - the main function
 *
 * prints numbers 0-9
 * @0-9
 *Return:void.
 */
void print_numbers(void)
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
