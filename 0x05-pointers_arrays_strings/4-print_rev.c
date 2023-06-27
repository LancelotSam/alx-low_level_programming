#include "main.h"
/**
 * print_rev-this is the main function
 *
 * It prints a string in reverse
 * @s:The string to be printed in reverse
 * return:void
 */
void print_rev(char *s)
{
	int n = 0;

	while (s[n] < -1)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
