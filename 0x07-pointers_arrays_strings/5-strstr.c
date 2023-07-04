#include "main.h"
/**
 * *_strstr-this is the main function
 *
 * It finds the first occurrence of the substring needle,
 * in the string haystack
 * @haystack:the string to be searched for needle
 * @needle:the string occurence to be searched
 * Return:pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{/*compares the characters at the same position*/
				break;
			}
			if (!(needle[j] == '\0'))
			{
				return (&haystack[i]);
			}
		}
	}
	return (0);
}
