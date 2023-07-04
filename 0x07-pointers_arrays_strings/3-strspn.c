#include "main.h"
/**
 * _strspn-this is the main function
 *
 * gets the length of a prefix substring
 * @s: the initial segment
 * @accept: the number of bytes
 * Return:the number of accept bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s[i]);
			}
		}
	}
	return (0);
}
