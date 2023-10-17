#include "main.h"
/**
 * _puts-this is the main function
 * it prints a str
 * @s: the string to be printed
 * Return:void
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;  /* Move to the next character in the string*/
	}
}
