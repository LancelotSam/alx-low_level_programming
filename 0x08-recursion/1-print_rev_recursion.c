#include "main.h"
/**
 * _print_rev_recursion-this is the main function
 *
 * It prints a string in reverse
 * @s:the string to be printed
 * Return: a string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}
	_putchar (*s);
	_print_rev_recursion(s - 1);
}
