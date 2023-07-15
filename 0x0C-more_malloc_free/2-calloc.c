#include "main.h"
/**
 * *_memset- this is the main functin
 *
 * fills the first n bytes of the memory area pointed to by the constant byte b
 * @s: the pointer to memery area to  be filled
 * @b: constst byte to fill the memory area
 * @n: the bytes in integer to be filled
 * Return:(s) a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{/*n is the value to be filled in the pointed memeory area */
	unsigned int i;/*the number of bytes to be set to value*/

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_calloc-this is the main function
 *
 * It allocates memory to an array
 * @nmemb:the array
 * @size: the size of the array
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *d;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	d = malloc(nmemb * size);
	_memset(d, 0, size * nmemb);
	if (d == NULL)
	{
		return (NULL);
	}
	return (d);
}
