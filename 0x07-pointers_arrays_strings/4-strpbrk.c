#include "main.h"
/**
 * *_strpbrk-this is the main function
 *
 * It locates the first occurrence of any bytes in the string accept
 * @s: the string to be checked for bytes occurence
 * @accept: the bytes to be checked if they occur in s
 * Return:A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			if (accept[j] == '\0')
			{
				return (accept - 1);
			}
		}
	}
	return (0);
}
