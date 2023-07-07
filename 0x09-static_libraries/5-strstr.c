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
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
