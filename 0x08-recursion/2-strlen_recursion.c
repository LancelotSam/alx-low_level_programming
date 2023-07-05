#include "main.h"
/**
 * _strlen_recursion-this is the main function
 *
 * It prints the length of a string
 * @s:the string whose length is to be printed
 * Return: string length
 */
int _strlen_recursion(char *s)
{/*int len = _strlen_recursion(s);*/

	if (*s)/* if the pointed value is non-zero or not ('\0')*/
	{
		_putchar ('\n');
		return (0);
	}
	return ((1 + _strlen_recursion(s + 1)));
}
