#include "main.h"
/**
 * *cap_string-this is the main function
 *
 * It capitalizes all the words of a string
 * @*:the string to be capitalized
 * Return: capita;ized alphabets
 */
char *cap_string(char *str)
{
	int i = 0;
	char che[] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i]!='\0'; i++)
	{
		if(i == 0)
		{
			if((str[i] >= 'a' && str[i] <='z'))
				str[i] = str[i] - 32;
		}
		if(str == che)/*check unwanted characters*/
		{
			++i;
			/* check the next character if lowercase*/
			if(str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32; /*subtract 32 to make it capital*/
			}
		}
		else
		{
			/*all other uppercase characters should be in lowercase*/
			if(str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32; /*add 32 to make it lowercase*/
		}
	}
	return (str);
}
