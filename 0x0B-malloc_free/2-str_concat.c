#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat-this is the main function
 *
 * It concatenates two strings
 * @s1:string to be concatenated
 * @s2: the second string to be concatenated
 * Return:pointer to contents of concatenated strings,
 * or Null for empty string or if function fails
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *dest;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	dest = malloc(sizeof(*dest) * (i + j + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{/* now copy code from s1 to dest*/
		dest[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{/*copy code frm s2 to dest*/
		dest[i + j] = s2[j];/*dest will contain strings from ij*/
		j++;
	}

	dest[i + j] = '\0';/* Append null terminator*/

	return (dest);
}


