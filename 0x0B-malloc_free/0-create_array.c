#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array-this is the main function
 * It  creates an array of chars,
 * and initializes it with a specific char
 * @size:the size of the array
 * @c:the character to initialize the array
 * Return: NULL if size is 0 or fails ,a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned  int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(*s) * size);

	if (s == NULL)
	{
		return (0); /*a retrun of 0 shows it has failed*/
	}

	i = 0;
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
