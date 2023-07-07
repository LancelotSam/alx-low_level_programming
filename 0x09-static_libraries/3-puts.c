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
	while (*str != '\0')
	{
		_putchar(*str);
		++*str;
	}
	_putchar('\n');
}
