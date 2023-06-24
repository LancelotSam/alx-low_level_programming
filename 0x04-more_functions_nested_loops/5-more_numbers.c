#include "main.h"
/**
 * more_numbers- this is the main function
 *
 * To print 5 more numbers
 * @0-14
 * * Return (void)
 */
void more_numbers(void)
{
	char c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar('1');
			_putchar(c % 10 + '0');
		}
		{
			_putchar('\n');
		}
	}
}
