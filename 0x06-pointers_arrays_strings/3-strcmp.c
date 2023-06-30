#include "main.h"
/**
 * _strcmp-this is the main function
 *
 * it compares a string
 * @s1:the first string
 * @s2: the second string
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 == s2)
	{
		return('0');
	}
	else if (s1 < s2)
	{
		return('-');
	}
	else
	{
		return('+');
	}
}
