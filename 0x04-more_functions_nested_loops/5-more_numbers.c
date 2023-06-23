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
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c <= 14; c++)
			_putchar(c);
	}
	{
		_putchar('\n');
	}	
}
