#include "main.h"
/**
 * void more_numbers(void)-to print 5 more numbers
 * @c- 0 to 14
 *
 * Return (void)
 */
void more_numbers(void)
{
	char c;

	for (c = '0'; c <= '14'; c++)
	{
		if (c == 10)
			_putchar(c);
	}
	{
		_putchar('\n');
	}	
}
