#include "main.h"
/**
 * *_strncpy- this is the main function
 *
 * it copies a string
 * @dest:String to be copied
 * @src:string to be copied
 * @n:integer to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;/* i is teh string length*/

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
