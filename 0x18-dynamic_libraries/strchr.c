#include "main.h"
/**
 * *_strchr-this is the main function
 *
 * It checks character in a string
 * @c: the character to be looked up
 * @s: the string to be checked
 * Return: a pointer for c or Null for otherwise
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
