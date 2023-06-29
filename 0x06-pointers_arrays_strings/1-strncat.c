#include "main.h"
/**
 * *_strncat- this is the main function
 *
 *  concatenates two strings
 *  @dest:string to be concatenated
 *  @src:string to be concatenated
 *  Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;


	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
