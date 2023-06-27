#include "main.h"
/**
 * _strlen-this is the main function
 *
 * Returns the length of a string
 * @s: the character to be printed as a length
 * Return: the integer length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] >= 1)
	{
		length++;
	}
	return (length);
}



