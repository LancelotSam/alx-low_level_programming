#include "lists.h"
/**
 * _strlen-this is the main function
 *
 * It calculates the length of a string
 * @str:the string to be evaluated
 * Return: integer length
 */
int _strlen(const char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
