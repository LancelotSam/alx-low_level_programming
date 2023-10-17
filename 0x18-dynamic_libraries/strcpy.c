#include "main.h"
/**
 * _strcpy-this is the main function
 *
 * it copies a string
 * @dest:where teh string is to be copied to
 * @src:the string to be copied
 * Return: copied, null terminated  string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
