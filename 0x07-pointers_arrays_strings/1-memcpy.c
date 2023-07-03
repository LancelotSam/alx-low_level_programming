#include "main.h"
/**
 * *_memcpy-this is the main function
 *
 * it copies copies n bytes from memory area src to memory area dest
 * @n: the bytes to be copied
 * @src: the area from which the bytes are to be copied
 * @dest:The memory area in which the bytes are to be copied
 * Return:string to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)/*elements before copying*/
	{
		dest[i] = src[i];
	}
	return (dest);
}
