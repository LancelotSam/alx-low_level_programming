#include "main.h"
/**
 * *_strcat- this is the main function
 *
 * it concatenates two strings
 * @dest: the string to be concatenated
 * @src:the string to be concatenated
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++; /*increment string length for dest */
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
