#include "main.h"
/**
 * _strstr-this is the main function
 * It locates the initial occurence of substr needle in haystack
 * @haystack: the str containing needle
 * @needle: the str of interest in haystack
 * Return: the str conatining needle
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*haystack != '\0')
	{
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}

