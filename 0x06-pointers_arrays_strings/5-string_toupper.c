#include "main.h"
/**
 * *string_toupper-this is the main function
 *
 * it changes all lowercase letters of a string to uppercase
 * @*: the letters of a string to be chnaged to uppercase
 * Return: Uppercase letters
 */
char *string_toupper(char *s)
{
	int j = 0;

	for(j = 0; s[j] != '\0'; j++)
	{
		if(s[j] >= 'a' && s[j] <= 'z' )
		{
			s[j] = s[j] - 32;
			_putchar(s[j]);
		}
	}
	return (0);
}
