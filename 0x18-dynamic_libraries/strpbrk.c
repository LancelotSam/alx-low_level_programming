#include "main.h"
/**
 * _strpbrk-this is the main function
 * it locates the initila occurence of bytes from accept
 * @s: the str char of interest in accept
 * @accept: the str to be searched
 * Return: the found char
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	a = accept;

	while (*s != '\0')
	{
		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
