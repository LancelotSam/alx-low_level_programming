#include "main.h"
/**
 * _strlen-this is the main function
 *
 * it calculates teh length of a string
 * @str:string length to be determined
 * Return:int length
 */
int _strlen(const char *str)
{
	int index = 0;

	if (*str == '\0')
		return (0);
	while (str[index])
	{
		index++;
	}

	return (index);
}
