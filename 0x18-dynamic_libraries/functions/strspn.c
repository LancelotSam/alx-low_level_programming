#include "main.h"
/**
 * _strspn-this is the main function
 * It calculates the length of an initial string
 * @s: the initial string
 * @accept: the characters to be calculated from str
 * Return:count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	i = 0;
	j = 0;

	for (; s[i] != '\0'; i++)
	{
		for (; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (count);
	}
	return (count);
}

