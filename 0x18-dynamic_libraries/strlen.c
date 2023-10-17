#include "main.h"
/**
 * _strlen-this is the main function
 *
 * it calculates teh length of a string
 * @s:string length to be determined
 * Return:int length
 */
int _strlen(char *s)
{
	int index = 0;

	if (*s == '\0')
		return (0);
	while (s[index])
	{
		index++;
	}

	return (index);
}
