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
	int i =0;

	while (s1[i] != '\0' && s2[i] != '\0')
		if (s1 == s2)
		{
			return(0);
		}
		else if (s1 < s2)
		{
			return(-1);
		}
		else
		{
			return(1);
		}
	return (0);
}
