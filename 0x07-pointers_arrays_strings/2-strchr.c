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
	while (*s != '\0')/* while the string not end*/
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s != c)/*checking for no occurence of our character*/
	{
		return ('\0');
	}
	return (0);
}
