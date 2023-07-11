#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup-this is the main function
 *
 * It returns a pointer to a newly allocated space in memory
 * @str: a copy of the given string used as parameter
 * Return: NULL if str is NULL or insufficient memory is availble,
 *  returns a pointer to str if successful
 */
char *_strdup(char *str)
{
	char *target;
	int len = 0;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	target = malloc(sizeof(*target) * (len + 1));
	if (target == NULL)
	{
		return (NULL);
	}
	while ((target[i] = str[i]) != '\0')
	{
		i++;
	}
	return (target);
}
