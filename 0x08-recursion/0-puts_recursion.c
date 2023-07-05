#include "main.h"
/**
 * _puts_recursion-this is the main function
 *
 * It prints a string, followed by a new line
 * @s:the string to be printed
 * Return: A string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
