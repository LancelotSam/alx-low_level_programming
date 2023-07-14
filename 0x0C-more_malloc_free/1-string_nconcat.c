#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat-this is the main function
 *
 * It concatenates two strings
 * @s1: the first string
 * @s2:the second string
 * @n:the bytes of the second string
 * Return: a pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *dest;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	while (s1[len1] != '\0' && s2[len2] != '\0')
	{
		len1++;
		len2++;
	}
	dest = malloc((n + 1) * sizeof(*dest));/*null byte*/
	if (n >= len2)
		dest = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		dest = malloc(sizeof(char) * (len1 + n + 1));
	if (dest == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		dest[i] = s1[i];
		/*copy n bytes*/
	for (j = 0; j < n; j++, i++)
	{
		dest[i] = s2[j];
	}
	dest[i] = '\0';
	return (dest);
}
