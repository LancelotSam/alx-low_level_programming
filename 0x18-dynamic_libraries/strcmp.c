#include "main.h"
/**
 * _strcmp-this is the main function
 *
 * It compares two strings
 * @s1:the first string
 * @s2:the second string
 * Return: -1 if s1<s2, 1 if s1>s2, 0 if s1=s2
 */
int _strcmp(char *s1, char *s2)
{
	size_t i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
