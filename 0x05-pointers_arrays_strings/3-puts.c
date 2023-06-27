#include "main.h"
/**
 *_puts- this is the main function
 *
 * prints a string
 * @str: the string to be printed
 * Return: a string
 */
void _puts(char *str)
{
	int m = 0;

	while (str[m] >= 1)
	{
		_putchar(str[m]);
		++m;
	}
	_putchar('\n');
}
