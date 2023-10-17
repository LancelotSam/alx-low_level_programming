#include "main.h"
/**
 * _strncpy-this is the main function
 *
 * it copies a string
 * @dest:where teh string is to be copied to
 * @src:the string to be copied
 * @n:the length of teh string
 * Return: copied, null terminated  string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
